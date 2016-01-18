//
//  DemoQueue5-3.hpp
//  DEMOS
//
//  Created by unbong on 15/12/30.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef DemoQueue5_3_hpp
#define DemoQueue5_3_hpp

#include <stdio.h>
#include "QueueDemo.hpp"

struct queueSimulateStack{
    struct QueueDemo *printQueue;
    struct QueueDemo *saveQueue;
};

struct queueSimulateStack * createStack5_3();
void push(struct queueSimulateStack *s , int data);
int pop(struct queueSimulateStack *s );
void excute5_3();

#endif /* DemoQueue5_3_hpp */
