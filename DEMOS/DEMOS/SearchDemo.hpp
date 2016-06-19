//
//  SearchDemo.hpp
//  DEMOS
//
//  Created by unbong on 16/6/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef SearchDemo_hpp
#define SearchDemo_hpp

#include <stdio.h>

#endif /* SearchDemo_hpp */

class SearchDemo{
public:
    SearchDemo();
    ~SearchDemo();
    void excuteFlow();
    
    //11-9
    void findFirstRepeatElament(int * data, int n);
    
    //11-14 寻找不存在的值
    void findMissingNumber(int * data, int n);
    
    //11-17 XOR
    void findMissingNumberForXOR(int * data, int n);
  //11-19
    void findRepeatElement(int * data, int n);
    
    //11-31
    void findElementWithMinSum(int * data, int n);
    
    //11-37
    void findTheMaxElement(int * data, int left, int right);
    
    //11-39
    void findZEROElement(int * data);
    
    //11-48
    void searchLastOccurence(int * data, int left, int right);
};

