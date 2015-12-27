//
//  StackDemo4-8.cpp
//  DEMOS
//
//  Created by unbong on 15/12/21.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "StackDemo4-8.hpp"

void checkHuiWen(std::string str){
   
    int i = 0;
    int j = str.length();
    while(i<j&&str[i]==str[j-1]){
        i++;
        j--;
    }
    if(i>j){
        printf("suscess");
        
    }else{
        printf("faild");
    }
}

//4-9
void checkHuiwenLinkedList(){
    
}

void excute4_8(){
    std::string a ="aabXbaa";
    checkHuiWen(a);
}