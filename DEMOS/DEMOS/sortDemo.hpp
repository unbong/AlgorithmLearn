//
//  sortDemo.hpp
//  DEMOS
//
//  Created by unbong on 16/5/15.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef sortDemo_hpp
#define sortDemo_hpp

#include <stdio.h>
#include <random>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;
class sortDemo{
public:
    sortDemo();
    ~sortDemo();
    void excuteFlow();
    int * generateData();
    int * bubbleSort(int * d, int n);
    int * selectionSort(int * d, int n);
    int * insertionSort(int * d, int n);
    int * shellsort(int * d, int len);
    void mergeSort(int * d, int *tmp, int left, int right);
    void merge(int * d, int * tmp, int left, int mid, int right);
    void quickSort(int * d, int right, int left);
    int partition(int * d, int right, int left);
    void countingSort(int *d, int k, int * b, int n);
    
    //10-3
    int findMax(int * d, int n);
    
    //10-9
    void findABK(int *d, int *e , int n);
    
    //10-22 对几乎排完序的序列进行nlonK的排序
    void sortlogk(int *d, int n);
    
    //10-24 对已经排好序的N个序列的Merge
    void mergeNArray(int * data1,int * data2, int * data3, int * result ,int n);
    
    //10-2? 对1000000中选择最大的十个数
    void findTo10(int * data, int * result , int n);
    
    //10-35
    void nutAndBottle(int * pnut, int *pbottle, int left, int right);
    int pivot(int * data, int left, int right);
    
    
};
#endif /* sortDemo_hpp */
