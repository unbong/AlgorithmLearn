//
//  QueueDemo.hpp
//  DEMOS
//
//  Created by unbong on 15/12/29.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef QueueDemo_hpp
#define QueueDemo_hpp

#include <stdio.h>
#include <cstdlib>
#include <random>

struct QueueDemo{
    int capacity ;
    int front;
    int rear;
    int *data;
};

struct QueueDemo * createQueueDemo();

void enQueue(struct QueueDemo * queue,int data);
int deQueue(struct QueueDemo * queue);
bool isFullQueue(struct QueueDemo * queue);
bool isEmpty(struct QueueDemo * queue);
void doubleQueueCapcity(struct QueueDemo * queue);

void test();

#endif /* QueueDemo_hpp */
