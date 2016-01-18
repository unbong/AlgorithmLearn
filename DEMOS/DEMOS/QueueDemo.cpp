//
//  QueueDemo.cpp
//  DEMOS
//
//  Created by unbong on 15/12/29.
//  Copyright © 2015年 unbong. All rights reserved.
//

//循环队列

#include "QueueDemo.hpp"



struct QueueDemo * createQueueDemo(){
    struct QueueDemo * q = (QueueDemo *)malloc(sizeof(struct QueueDemo));
    if(!q) return NULL;
    q->capacity = 5;
    q->front = -1;
    q->rear = -1;
    q->data = (int *) malloc(q->capacity * sizeof(int));
    if(!q) return NULL;
    return q;
}

void enQueue(struct QueueDemo * queue,int data){
    if(isFullQueue(queue)){
        printf("Queue is full");
       // doubleQueueCapcity(queue);
        return ;
    }
    if(queue->rear==-1){
        queue->front++;
        queue->rear++;
        queue->data[queue->rear]= data;
    }else if(queue->capacity-1==queue->rear){
        queue->rear=0;
        queue->data[queue->rear]=data;
    }
    else {
        queue->rear++;
        queue->data[queue->rear]= data;
    }
};

int deQueue(struct QueueDemo * queue){
    if(isEmpty(queue)){
        printf("Queue is empty");
        return 0;
    }
    
   
    int result =queue->data[queue->front];
    if(queue->rear==queue->front){
        queue->front=queue->rear=-1;
    }else{
        queue->front=(queue->front+1)%queue->capacity;
    }
    return result ;
}


bool isFullQueue(struct QueueDemo * queue){
    bool result = false;
    if(queue->rear-queue->front==queue->capacity-1 || (queue->front-queue->rear==1)){
        result = true;
    }
    return result;
}

bool isEmpty(struct QueueDemo * queue){
    bool result = false;
    if(-1==queue->front ){
        result = true;
    }
    return result;
}

void doubleQueueCapcity(struct QueueDemo * queue){
    if(!queue) return;
    queue->capacity*=2;
    queue->data = (int *)realloc(queue->data,queue->capacity);
}

void test(){
    struct QueueDemo * queue = createQueueDemo();
    for (int index=0;index<5;index++){
        std::random_device  rd;
        std::uniform_int_distribution<int> dist(0,20);
        int ranom =dist(rd);
        printf("%d",ranom);
        printf(",");
        enQueue(queue, ranom);
    }
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    enQueue(queue,6);
    enQueue(queue,7);
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    printf("%d",deQueue(queue));
    printf("\n");
    printf("%d",deQueue(queue));
    
    printf("over \n");
}
