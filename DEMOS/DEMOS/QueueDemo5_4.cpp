//
//  QueueDemo5_4.cpp
//  DEMOS
//
//  Created by unbong on 16/1/1.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "QueueDemo5_4.hpp"

void SlidingWindow::createData(){
    for(int i=0;i<10;i++){
        std::random_device rd;
        std::uniform_int_distribution<int> dist(0,20);
        int rand= dist(rd);
        arr[i]=rand;
        printf("%d",rand);
        printf(",");
    }
    printf("\n");
}

void SlidingWindow::getSlideMaxArray(){
    for(int i=0;i<8;i++){
        int max = arr[i];
        for(int j=i;j<i+windowCount;j++){
            if( max < arr[j]){
                max = arr[j];
            }
        }
        maxSlideArr[i]=max;
    }
}

void SlidingWindow::excute5_4(){
    createData();
    getSlideMaxArray();
    
    for(int i=0;i<8;i++){
        printf("%d",maxSlideArr[i]);
        printf(",");
    }
}
