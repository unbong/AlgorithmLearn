//
//  ForDemo4-12Stack.hpp
//  DEMOS
//
//  Created by unbong on 15/12/26.
//  Copyright © 2015年 unbong. All rights reserved.
//

#ifndef ForDemo4_12Stack_hpp
#define ForDemo4_12Stack_hpp

#include <stdio.h>
class charStakc{
    //const int capacity = 10;
    
private:
    #define MAXTIME 10
    char c[MAXTIME];
    
    enum type {RIGHT, LEFT, MIDDLE};
    
    int rightIStartIndex = MAXTIME-1;
    int leftStartIndex = 0;
    int middleStartIndex = MAXTIME/3;
    
    int rigthIndex = rightIStartIndex+1;
    int leftIndex = leftStartIndex-1;
    int middleIndex = middleStartIndex-1;
    
    bool checkCanInsertt(type InsertType);
    
    bool checkCanShiftMiddelStak(type InsertType);
    
public:
    charStakc(){};
    ~charStakc(){};
    
    void excute4_12();
    void push(char data, type type);


};

#endif /* ForDemo4_12Stack_hpp */
