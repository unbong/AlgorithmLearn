//
//  ForTreeStack.hpp
//  DEMOS
//
//  Created by unbong on 16/1/18.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef ForTreeStack_hpp
#define ForTreeStack_hpp

#include <stdio.h>
#include <cstdlib>
#include "TreeForDemo6-1.hpp"

struct Stack4Tree {
    struct Tree2 * array;
    int top;
    int capacity;
};

struct Stack4Tree * createStack4Tree();

bool isEmpty (struct Stack4Tree *  stack);

bool inFull (struct Stack4Tree *  stack);

void push(struct Stack4Tree *  stack, struct Tree2 * data);

void doubleStack(struct Stack4Tree *  stack);

struct Tree2 * pop(struct Stack4Tree *  stack);

#endif /* ForTreeStack_hpp */
