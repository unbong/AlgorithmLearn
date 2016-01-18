//
//  QueueDemo5_4.hpp
//  DEMOS
//
//  Created by unbong on 16/1/1.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef QueueDemo5_4_hpp
#define QueueDemo5_4_hpp

#include <stdio.h>
#include "QueueDemo.hpp"

//引窗
class SlidingWindow{
private:
    int arr[10];
    int windowCount =3;
    int maxSlideArr[8];
public:
    SlidingWindow(){};
    ~SlidingWindow(){};
    void createData();
    void getSlideMaxArray();
    void excute5_4();

};

#endif /* QueueDemo5_4_hpp */
