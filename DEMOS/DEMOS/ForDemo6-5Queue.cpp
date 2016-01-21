//
//  ForDemo6-5Queue.cpp
//  DEMOS
//
//  Created by unbong on 16/1/20.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "ForDemo6-5Queue.hpp"


struct QueueForDemo6_5 * createQueue(int size){
    struct QueueForDemo6_5 * queue =(struct QueueForDemo6_5 *) malloc(sizeof(struct QueueForDemo6_5));
    queue->capacity = size;
    queue->front=-1;
    queue->rear = -1;
    queue->tree2 = (struct Tree2 *)malloc(size * sizeof(struct Tree2));
    return queue;
}

bool isEmpty(struct QueueForDemo6_5 *  queue){
    if(queue->front == -1){
        return true;
    }
    return false;
}

bool isFull(struct QueueForDemo6_5 *  queue){
    if(queue->capacity-1 == queue->front){
        return true;
    }
    return false;
}

void enQueue(struct QueueForDemo6_5 *  queue , struct Tree2 * tree){
    if(isFull(queue)){
        printf("Is Full");
    }else {
        queue->rear = (queue->rear+1) % queue->capacity;
        queue->tree2[queue->rear] = * tree;
        if(queue->front == -1){
            queue->front = queue->rear;
        }
    }
}

struct Tree2 * deQueue(struct QueueForDemo6_5 *  queue ){
    struct Tree2 * tree ;
    if(isEmpty(queue)){
        printf("queue is empty");
    }else {
        tree = &queue->tree2[queue->front];
        if(queue->front==queue->rear){
            queue->front=queue->rear = -1;
        }
        queue->front = (queue->front+1) % queue->capacity;
    }
    return tree;
}

