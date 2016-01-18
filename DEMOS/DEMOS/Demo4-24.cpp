//
//  Demo4-24.cpp
//  DEMOS
//
//  Created by unbong on 15/12/29.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "Demo4-24.hpp"


void Demo4_24::createRandomArrya(){

    for(int i=0;i<10;i++){
        std::random_device rand;
        std::uniform_int_distribution<int> dist(0,20);
        int rd = dist(rand);
        printf("%d",rd);
        printf(",");
        arr[i] = rd;
    }
    
}

void Demo4_24::computeMax(){
    
    
    int max =arr[0];
    int temp ;
    for(int i=0;i<10;i++){
        int currentData = arr[i];
         int count =1;
        for(int j = i ;j<10;j++){
            count =1;
            if(currentData >= arr[j] ){
                count ++;
            }else{
                break;
            }
        }
        temp = currentData * count;
        if(temp>max){
            max = temp;
        }
    }
    printf("¥¥n");
    printf("%d",max);
}


void Demo4_24:: excute4_24(){
    createRandomArrya();
    computeMax();
}