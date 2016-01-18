//
//  Queue5_ListNode.hpp
//  DEMOS
//
//  Created by unbong on 15/12/30.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef Queue5_ListNode_hpp
#define Queue5_ListNode_hpp

#include <cstdlib>
#include <stdio.h>

struct ListNode {
    int data;
    struct ListNode * next;
};

struct queue5ListNode{
    struct ListNode * front;
    struct ListNode * rear;
};

struct queue5ListNode * createQueueListNode();

void enQueue5ListNode(struct queue5ListNode * queue,int data);

int  deQueue5ListNode(struct queue5ListNode *queue);

void excute5ListNode();

#endif /* Queue5_ListNode_hpp */
