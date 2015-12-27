//
//  StackDemo4-1.cpp
//  DEMOS
//
//  Created by unbong on 15/12/16.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "StackDemo4-1.hpp"

std::map<char, int> rankMap;

//中缀转后缀
std::string trancer(std::string str){
    std::string result="";
    
    struct ArrayStack *S;
    
    S = CreateStack();
    for(int index=0 ;index<str.length();index++){
        char p = str[index];
        if(isdigit(p)){
            printf("%c",p);
            result.push_back(p);
        }else if('('==p){
            push(S,p);
        }else if(')'==p){
            while(!(IsEmptyStack(S))){
                char stackData = pop(S);
                if('('==stackData){
                    break;
                }else{
                    printf("%c",stackData);
                    result.push_back(p);
                }
            }
        }else if(checkIsOPR(p)){
            if(IsEmptyStack(S)){
                push(S,p);
            }else{
                if(checkPriority(p,peek(S))){
                    push(S,p);
                }else{
                    char ch = pop(S);
                    
                    printf("%c",ch);
                    result.push_back(ch);
                    push(S,p);
                }
            }
        }
    }
    while(!IsEmptyStack(S)){
        char ch = pop(S);
        printf("%c",ch);
        result.push_back(ch);
    }
    
    return result;
}

void createRankMap(){
    
    rankMap['+'] = 1;
    rankMap['-'] = 1;
    rankMap['*'] = 2;
    rankMap['/'] = 2;
}

//
bool checkPriority(char firstPar, char secontPar){
    bool result = false;
    int fisrtParRank = rankMap[firstPar];
    int secontPsrRank = rankMap[secontPar];
    if(fisrtParRank>secontPsrRank){
        result = true;
    }
    return result;
}



//判断是否为操作符
bool checkIsOPR(char p){
    bool result = false;
    if('+'==p||'-'==p||'*'==p||'/'==p){
        result = true;
    }
    
    return result;
}

std::string  excute(){
    createRankMap();

    std::string str = "2*3-4+5*3";
    return trancer(str);
}