//
//  StackDemo4-1.hpp
//  DEMOS
//
//  Created by unbong on 15/12/16.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef StackDemo4_1_hpp
#define StackDemo4_1_hpp

#include <stdio.h>
#include <ctype.h>
#include "ForDemo4-1Stack.h"
#include <string>
#include <map>





std::string trancer(std::string str);
void createRankMap();
bool checkIsOPR(char p);
bool checkPriority(char firstPar, char secontPar);
std::string excute();

#endif /* StackDemo4_1_hpp */
