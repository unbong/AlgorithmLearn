//
//  countingSort.cpp
//  hanoi
//
//  Created by unbong on 15/7/31.
//  Copyright (c) 2015年 unbong. All rights reserved.
//

#include "countingSort.h"

void  countingSort(int data[],int datalength,int range){
    int count[range+1] ;
    int sortedData[datalength] ;
    //初始化
    for(int i=0; i<=range;i++){
        count[i] = 0;
    }
    //计数
    for(int j=0; j<datalength; j++){
        count[data[j]] ++;
    }
    //对count数组个数进行累加
    for(int z=1 ; z<=range;z++){
        count[z]=count[z]+count[z-1];
    }
    //
    for(int j=datalength-1 ;j>=0;j--){
        sortedData[count[data[j]]-1] = data[j];
        count[data[j]]--;
    }
    
    for(int j=0; j<datalength; j++){
        printf("%d",sortedData[j]);
    }
    
}