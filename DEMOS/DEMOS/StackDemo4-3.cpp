//
//  StackDemo4-3.cpp
//  DEMOS
//
//  Created by unbong on 15/12/19.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "StackDemo4-3.hpp"

void plot(std::string str){
    
    struct ArrayStackFor4_3 *S = CreateStack4_3();
    
    
    for(int index=0;index<str.length();index++){
        char p = str[index];
        
        if(isdigit(p)){
            push(S,(int)p-'0');
        }else if (checkIsPor(p)){
            int firstVal =pop(S);
            int secondVal = pop(S);
            int res =posfixCompute(secondVal, firstVal, p);
            push(S,res);
        }
    }
    printf("%d",pop(S));
    
}

int posfixCompute(int firstPar,int secondPar , char posfix){
    int result = NULL;
    switch (posfix) {
        case '+':
            result = firstPar + secondPar;
            break;
        case '-':
            result = firstPar - secondPar;
            break;
        case '*':
            result = firstPar * secondPar;
            break;
        case '/':
            result = firstPar / secondPar;
            break;
            
        default:
            break;
    }
    
    return result;
}

bool checkIsPor(char p){
    bool result = false;
    if('+'==p||'-'==p||'*'==p||'/'==p){
        result = true;
    }
    return result;
}


void excute4_3(std::string str){

    plot(str);
}