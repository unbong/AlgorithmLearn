//
//  ForDemo4-1Stack.hpp
//  hanoi
//
//  Created by unbong on 15/12/13.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef ForDemo4_1Stack_hpp
#define ForDemo4_1Stack_hpp

struct ArrayStack{
    int top ;
    int capacity ;
    char * array;
};

struct ArrayStack * init_ArrayStack();
struct ArrayStack *CreateStack();
bool IsEmptyStack(struct ArrayStack *S);
bool IsFullStack(struct ArrayStack *S);
void push(struct ArrayStack *S, char data);
char pop(struct ArrayStack *S);
char peek(struct ArrayStack *S);
void DeleteStack(struct ArrayStack *S);
void test();
void DoubleStack(struct ArrayStack *S);

#endif /* ForDemo4_1Stack_hpp */
