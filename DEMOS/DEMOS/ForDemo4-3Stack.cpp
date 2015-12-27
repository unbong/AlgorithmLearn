//
//  ForDemo4-3Stack.cpp
//  DEMOS
//
//  Created by unbong on 15/12/19.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "ForDemo4-3Stack.hpp"


#include <stdio.h>
#include <cstdlib>





struct ArrayStackFor4_3 *CreateStack4_3(){
    struct ArrayStackFor4_3 *S;
    S =(ArrayStackFor4_3 *)malloc(sizeof(struct ArrayStackFor4_3));
    if(!S) return NULL;
    S->capacity =1;
    S->top = -1;
    S->array = (int *)malloc(S->capacity * sizeof(int));
    if(!S->array) return NULL;
    return S;
};

bool IsEmptyStack(struct ArrayStackFor4_3 *S){
    return (S->top == -1);
}

bool IsFullStack(struct ArrayStackFor4_3 *S){
    return (S->top == S->capacity-1);
}

void DoubleStack(struct ArrayStackFor4_3 *S){
    S->capacity *= 2;
    S->array = (int *)realloc(S->array, S->capacity);
}

void push(struct ArrayStackFor4_3 *S, int data){
    if(IsFullStack(S)) DoubleStack(S);
    S->array[++S->top] =data;
}

int pop(struct ArrayStackFor4_3 *S){
    if(IsEmptyStack(S)){
        printf("Is Empty Stack");
        return NULL;
    }
    else
        return S->array[S->top--];
}

int peek(struct ArrayStackFor4_3 *S){
    if(IsEmptyStack(S)){
        printf("Is Empty Stack");
        return NULL;
    }else{
        return S->array[S->top];
    }
}

void DeleteStack(struct ArrayStackFor4_3 *S){
    if(S){
        if(S->array) free(S->array);
        free(S);
    }
}