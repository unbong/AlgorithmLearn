//
//  quickSort.cpp
//  hanoi
//
//  Created by unbong on 15/7/29.
//  Copyright (c) 2015年 unbong. All rights reserved.
//

#include "quickSort.h"


int  partition(int data[],int be, int en){
    int key , left, right;
    key = data[be];
    left = be-1;
    for(int right = be; right < en-1 ;right++){
        int tmp;
        if(key <= data[right]){
            left++;
            tmp =   data[right];
            data[right] = data[left];
            data[left] = tmp;
         }
    }
    data[left+1]=key;
    
    return left+1;
}

void quickSortXVersion(int data[],int begin, int end){
    
    if(begin<end){
        end = partition(data, begin, end);
        quickSortXVersion(data, begin, end-1);
        quickSortXVersion(data, begin, end+1);
    }
}

void showSortedData(int data[],int begin, int end){
    for(int i = begin; i<=end ;i++){
        printf("%d", data[i] );
    }
}