//
//  main.cpp
//  hanoi
//
//  Created by unbong on 15/7/5.
//  Copyright (c) 2015年 unbong. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include "Linkedtable.h"
#include "StackDemo4-3.hpp"
#include "StackDemo4-1.hpp"
#include "StackDemo4-8.hpp"
#include <string>
#include "StackDemo4-11.hpp"
#include "ForDemo4-12Stack.hpp"



int main(int argc, const char * argv[]) {
    
    std::string abc = "abcde";
    char p;
    int a;
    
    for(int i=0;i<abc.length();i++)
    {
        p = abc[i];
        
        a =3;
        
    }

    
    //stack结构
   // Demo4_1Test();
    
    //4-2
    //
  
   // std::string result = excute();
    //4-3
    //excute4_3(result);
    
    //4-8
    // excute4_8();
    
    //4-11
    //excute4_11();
    //4-12
    
//    charStakc stakc;
//    stakc.excute4_12();
    
    charStakc * aaa = new charStakc();
    aaa->excute4_12();
    
    delete aaa;
    
    
    return 0;
}
