//
//  quickSort.cpp
//  hanoi
//
//  Created by unbong on 15/7/29.
//  Copyright (c) 2015年 unbong. All rights reserved.
//

#include "quickSort.h"

//
int  partition(int data[],int be, int en){
    int key , left, right;
    key = data[en];
    left = be-1;
    for(int right = be; right < en ;right++){
        int tmp;
        if(key >= data[right]){
            left = left+1;
            swap(&data[left],&data[right]);
         }
    }
    swap(&data[left+1],&data[en]);
    
    return left+1;
}

void quickSortXVersion(int data[],int begin, int end){
    
    if(begin<end){
        int temp = partition(data, begin, end);
        quickSortXVersion(data, begin, temp-1);
        quickSortXVersion(data, temp+1, end);
    }
    }

void swap (int * begin , int *end ){
    int tmp = *begin;
    *begin = * end;
    *end = tmp;
}


int harePartition(int data[], int be, int end){
   //失败版

    //    int left,right,key;
    //    key = data[be];
    //    left = be-1;
    //    right = end+1;
    //    while(true){
    //        do{
    //            left++;
    //        }while(key>data[left]);
    //
    //        do{
    //            right--;
    //        }while(key<data[right]);
    //
    //        if(left<right){
    //            swap(&data[left],&data[right]);
    //
    //        }else{
    //            return right;
    //        }
    //    }
    //变种版 失败
    int left,right,key;
    key = data[be];
    left = be;
    right = end;
    while(left<right){
        
        while(data[right]>=key && left<right)
            right--;
        
        
        data[left]=data[right];
        
        while(data[left]<=key && left<right)
            left++;
        
        
        data[right]=data[left];
        
    }
    data[left]=key;
    return left;
}



void hoareQuickSort(int data[],int be, int end){
    if(be<end){
        int tmp = harePartition(data, be, end);
        harePartition(data, be, tmp-1);
        harePartition(data, tmp+1, end);
    }
}

void showSortedData(int data[],int begin, int end){
    
    for(int i = begin; i<=end ;i++){
        printf("%d", data[i] );
    }
    printf("\n");
}