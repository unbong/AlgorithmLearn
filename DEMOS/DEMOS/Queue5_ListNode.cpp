//
//  Queue5_ListNode.cpp
//  DEMOS
//
//  Created by unbong on 15/12/30.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "Queue5_ListNode.hpp"


struct queue5ListNode * createQueueListNode(){
    struct queue5ListNode * result ;
    result = (queue5ListNode *)malloc(sizeof(struct queue5ListNode));
    result->front = (ListNode*)malloc(sizeof(struct ListNode));
    result->rear = result->front;
    return result;
}

void enQueue5ListNode(struct queue5ListNode * queue,int data){
    queue->rear->data = data;
    queue->rear->next =  (ListNode*)malloc(sizeof(struct ListNode));
    queue->rear = queue->rear->next;
}

int  deQueue5ListNode(struct queue5ListNode *queue){
    int result = queue->front->data;
    struct ListNode * currentNode = queue->front;
    queue->front= queue->front->next;
    free(currentNode);
    return result;
}

void excute5ListNode(){
    struct queue5ListNode * queue = createQueueListNode();
    for(int i = 0 ;i<5;i++){
        printf("%d",i);
        enQueue5ListNode(queue, i);
    }
    
    printf("%d",deQueue5ListNode(queue));
    printf("\n");
    printf("%d",deQueue5ListNode(queue));
    printf("\n");
    printf("%d",deQueue5ListNode(queue));
    printf("\n");

    
}
