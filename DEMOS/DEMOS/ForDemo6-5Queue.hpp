//
//  ForDemo6-5Queue.hpp
//  DEMOS
//
//  Created by unbong on 16/1/20.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef ForDemo6_5Queue_hpp
#define ForDemo6_5Queue_hpp

#include <stdio.h>
#include "TreeForDemo6-1.hpp"

struct QueueForDemo6_5{
    int front, rear;
    int capacity;
    struct Tree2 * tree2;
};

struct QueueForDemo6_5 * createQueue(int size);
bool isEmpty(struct QueueForDemo6_5 *  queue);
bool isFull(struct QueueForDemo6_5 *  queue);
void enQueue(struct QueueForDemo6_5 *  queue , struct Tree2 * tree);
struct Tree2 * deQueue(struct QueueForDemo6_5 *  queue );


#endif /* ForDemo6_5Queue_hpp */
