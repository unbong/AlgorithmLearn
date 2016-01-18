//
//  ForTreeStack.cpp
//  DEMOS
//
//  Created by unbong on 16/1/18.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "ForTreeStack.hpp"


struct Stack4Tree * createStack4Tree(){
    struct Stack4Tree * result ;
    result = (struct Stack4Tree *)malloc(sizeof(struct Stack4Tree));
    result->top=-1;
    result->capacity=1;
    result->array = (struct Tree2 *)malloc(result->capacity * sizeof(struct Tree2 ));
    return result;
}

bool isEmpty (struct Stack4Tree *  stack){
    bool result = false;
    if(stack->top == -1){
        result = true;
    }
    return result;
}


bool isFull (struct Stack4Tree *  stack){
    if(stack->capacity-1==stack->top){
        return true;
    }
    return false;
}

void push(struct Stack4Tree *  stack, struct Tree2 * data){
    if(isFull(stack)){
     doubleStack(stack);
    }
    stack->array[++stack->top] = * data;
}

struct Tree2 * pop(struct Stack4Tree *  stack){
    if(isEmpty(stack)){
        printf("stack is empty");
        return NULL;
    }
    return & stack->array[stack->top--];
}


void doubleStack(struct Stack4Tree *  stack){
    stack->capacity *=2;
    (struct Tree2 *)realloc(stack->array, stack->capacity);
}
