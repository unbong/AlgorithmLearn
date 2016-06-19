//
//  SearchDemo.cpp
//  DEMOS
//
//  Created by unbong on 16/6/11.
//  Copyright © 2016年 unbong. All rights reserved.
//
#include "sortDemo.hpp"
#include "SearchDemo.hpp"
#include <math.h>
SearchDemo::SearchDemo(){
    
}

SearchDemo::~SearchDemo(){
    
}

void SearchDemo::excuteFlow(){
    //int data[11] = {-2,4,1,3,5,7,4,8,9,1,12};
    int n = 11;
    int data[11] = {-2,-1,0,1,2,3,3,4,5,6,7};
    //findMissingNumber(data, 11);
    //findMissingNumberForXOR(data, n);
    //findRepeatElement(data,11);
    //findElementWithMinSum(data,n);
    //findTheMaxElement(data, 0, 10);
    searchLastOccurence(data, 0, n-1);
}

//11-9
void SearchDemo::findFirstRepeatElament(int * data, int n){
    for (int i = 0; i<n; n++) {
        for(int j = i+1;i<n;j++){
            if(data[i] == data[j]){
                printf("is exist");
                return ;
            }
        }
    }
    printf("it is not exist");
    return;
}


//11-14 寻找不存在的值
void SearchDemo::findMissingNumber(int * data, int n){
    sortDemo * sDemo = new sortDemo();
    sDemo->quickSort(data, n-1, 0);
    delete (sDemo);
    for(int i = 0;i<n;i++){
        if(i==0&&data[i] != 1){
            printf("Missing number is: %d", 1);
            return;
        }
        if(data[i]+1 != data[i+1]){
            printf("Missing number is: %d", data[i]+1);
            return;
        }
    }
    
}

//11-17 XOR
void SearchDemo::findMissingNumberForXOR(int * data, int n){
    int x, y, i;
    
    for(i =0; i<n;i++){
        x ^= data[i];
    }
    for(i=1;i <= n;i++){
        y ^= i;
    }
    
    printf("Missing Number is %d ", x ^ y);
    return ;
}

//11-19
void SearchDemo::findRepeatElement(int *data, int n){
    sortDemo * sDemo = new sortDemo();
    sDemo->quickSort(data, n-1, 0);
    delete (sDemo);
    for(int i = 0; i<n-1;i++){
        if(data[i]==data[i+1]){
            printf("repeat element is %d", data[i]);
        }
    }
}

//11-31 THIS IS WRONG
void SearchDemo::findElementWithMinSum(int * data, int n){
    sortDemo * sDemo = new sortDemo();
    sDemo->quickSort(data, n-1, 0);
    delete(sDemo);
    
    int i = 0, j = n-1, min = INT32_MAX, tmp= 0;
    int iElement = 0, jElement =0;
    while(i < j){
        tmp = data[i] + data[j];
        if(tmp > 0 ){
            //min = tmp;
            iElement = data[i];
            jElement = data[j];
            j--;
        }else if(tmp < 0 ){
            //min = tmp;
            iElement = data[i];
            jElement = data[j];
            i++;
        }else if(tmp == 0){
            iElement = data[i];
            jElement = data[j];
            break;
        }
    }
    printf("the elment is %d, %d", iElement, jElement);
}

//11-37
void SearchDemo::findTheMaxElement(int * data, int left, int right){
    
    
    if(left < right){
        int mid = (left+right)/2;
        if(data[mid-1]>data[mid] && data[mid]>data[mid+1]){
            findTheMaxElement(data, left, mid);
        }else if(data[mid-1] < data[mid] && data[mid] < data[mid+1]){
            findTheMaxElement(data, mid, right);
        }else if(data[mid-1] < data[mid] && data[mid] > data[mid+1]){
            printf("the max element is %d", data[mid]);
        }else{
            
        }
    }
    
}

//11-39
void SearchDemo::findZEROElement(int * data){
    bool roop = true;
    int i = 0;
    int start = 2;
    int startindex =0;
    int endIndex = 0;
    do{
        
        endIndex = pow(start, i);
        if (i!= 0) {
            startindex = pow(start, i-1);
        }
        
        if(data[endIndex]==0){
            break;
        }
    }while(roop);
    
}
//11-47
void SearchDemo::searchLastOccurence(int * data, int left, int right){
    int mid = (left+right)/2;
    int d =3;
    if(left< right){
        if(data[mid+1]>data[mid]&& data[mid]==d){
            printf("index is %d",mid);
        }else if(data[mid]>d){
            searchLastOccurence(data, left, mid);
        }else{
            searchLastOccurence(data, mid, right);
        }
    }
    
}
