//
//  ForDemo4-1Stack.cpp
//  hanoi
//
//  Created by unbong on 15/12/13.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>

struct ArrayStack{
    int top ;
    int capacity ;
    char * array;
};

struct ArrayStack * init_ArrayStack()
{
    struct ArrayStack *p = (ArrayStack *)malloc(sizeof(struct ArrayStack));
    return p;
}

struct ArrayStack *CreateStack(){
    struct ArrayStack *S;
    S =(ArrayStack *)malloc(sizeof(struct ArrayStack));
    if(!S) return NULL;
    S->capacity =1;
    S->top = -1;
    S->array = (char *)malloc(S->capacity * sizeof(char));
    if(!S->array) return NULL;
    return S;
};

bool IsEmptyStack(struct ArrayStack *S){
    return (S->top == -1);
}

bool IsFullStack(struct ArrayStack *S){
    return (S->top == S->capacity-1);
}

void DoubleStack(struct ArrayStack *S){
    S->capacity *= 2;
    S->array = (char *)realloc(S->array, S->capacity);
}

void push(struct ArrayStack *S, char data){
    if(IsFullStack(S)) DoubleStack(S);
    S->array[++S->top] =data;
}

char pop(struct ArrayStack *S){
    if(IsEmptyStack(S)){
        printf("Is Empty Stack");
        return NULL;
    }
    else
        return S->array[S->top--];
}

char peek(struct ArrayStack *S){
    if(IsEmptyStack(S)){
        printf("Is Empty Stack");
        return NULL;
    }else{
        return S->array[S->top];
    }
}

void DeleteStack(struct ArrayStack *S){
    if(S){
        if(S->array) free(S->array);
        free(S);
    }
}
