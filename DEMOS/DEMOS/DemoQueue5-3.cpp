//
//  DemoQueue5-3.cpp
//  DEMOS
//
//  Created by unbong on 15/12/30.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "DemoQueue5-3.hpp"


struct queueSimulateStack * createStack5_3(){
    struct queueSimulateStack * result = (queueSimulateStack *)malloc(sizeof(struct queueSimulateStack));
    if(!result) return NULL;
    result->printQueue = createQueueDemo();
    if(! result->printQueue) return NULL;
    result->saveQueue = createQueueDemo();
    if(! result->saveQueue) return NULL;
    return result;
}

void push(struct queueSimulateStack *s , int data){
    enQueue(s->saveQueue,data);
    
}

int pop(struct queueSimulateStack *s ){
    int data =NULL;
    while(!isEmpty(s->saveQueue)){
        data = deQueue(s->saveQueue);
        if(!isEmpty((s->saveQueue))){
            enQueue((s->printQueue), data);
        }
    }
    while(!isEmpty(s->printQueue)){
        enQueue(s->saveQueue, deQueue(s->printQueue));
    }
    
    return data;
}

void excute5_3(){
    struct queueSimulateStack  *s = createStack5_3();
    for(int i=0;i<5;i++ ){
        printf("%d",i);
        printf(",");
        push(s,i);
    }
    printf("\n");
    printf("%d",pop(s));
    printf("\n");
    printf("%d",pop(s));
    
}
