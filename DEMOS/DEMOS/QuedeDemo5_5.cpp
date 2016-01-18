//
//  QuedeDemo5_5.cpp
//  DEMOS
//
//  Created by unbong on 16/1/1.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "QuedeDemo5_5.hpp"


void QueueMoveToStack::createData(){
    queue = createQueueDemo();
    for(int i=0;i<10;i++){
        std::random_device rd;
        std::uniform_int_distribution<int> dist(0,20);
        int rand= dist(rd);
        queue->data[i]=rand;
        printf("%d",rand);
        printf(",");
    }
    printf("\n");
}

void QueueMoveToStack::reserveData(){
    stack = CreateStack4_3();
    while(isEmpty(queue)){
        push(stack,deQueue(queue));
    }
    while(IsEmptyStack(stack)){
        enQueue(queue, pop(stack));
    }
    int top = deQueue(queue);
    while(isEmpty(queue)){
        push(stack,deQueue(queue));
    }
    push(stack,top);
}

void QueueMoveToStack::excute5_5(){
    createData();
    reserveData();
    while(IsEmptyStack(stack)){
        printf("%d",pop(stack));
        printf(",");
    }
    
}



