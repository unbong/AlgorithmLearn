//
//  StackDemo4-11.cpp
//  DEMOS
//
//  Created by unbong on 15/12/26.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "StackDemo4-11.hpp"


void excute4_11(){
    
    struct  ArrayStack *S = CreateStack();
    
    for(int index =0 ;index <5;index++){
        char c = index + '0';
        printf("%c",c);
        push(S,c);
    }
    
    reverseStack(S);
    printf("%c",pop(S));
}

void reverseStack(struct ArrayStack *S){
    char data ;
    if(IsEmptyStack(S)) return;
    data = pop(S);
    reverseStack(S);
    addAtBottom(S,data);
    
}

void addAtBottom(struct ArrayStack *S ,char data){
    char temp ;
    if(IsEmptyStack(S)){
        push(S, data);
        return;
    }
    temp = pop(S);
    addAtBottom(S, data);
    push(S,temp);
}