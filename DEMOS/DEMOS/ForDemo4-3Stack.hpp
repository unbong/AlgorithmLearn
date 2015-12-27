//
//  ForDemo4-3Stack.hpp
//  DEMOS
//
//  Created by unbong on 15/12/19.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef ForDemo4_3Stack_hpp
#define ForDemo4_3Stack_hpp

struct ArrayStackFor4_3{
    int top ;
    int capacity ;
    int *array;
};

struct ArrayStackFor4_3 *CreateStack4_3();
bool IsEmptyStack(struct ArrayStackFor4_3 *S);
bool IsFullStack(struct ArrayStackFor4_3 *S);
void push(struct ArrayStackFor4_3 *S, int data);
int pop(struct ArrayStackFor4_3 *S);
int peek(struct ArrayStackFor4_3 *S);
void DeleteStack(struct ArrayStackFor4_3 *S);
void test();
void DoubleStack(struct ArrayStackFor4_3 *S);

#endif /* ForDemo4_3Stack_hpp */
