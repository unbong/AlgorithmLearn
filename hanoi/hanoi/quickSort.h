//
//  quickSort.h
//  hanoi
//
//  Created by unbong on 15/7/29.
//  Copyright (c) 2015年 unbong. All rights reserved.
//

#ifndef __hanoi__quickSort__
#define __hanoi__quickSort__

#include <stdio.h>
int  partition(int data[],int be, int en);
void quickSortXVersion(int data[],int begin, int end);
void showSortedData(int data[],int begin, int end);
int harePartition(int data[], int be, int end);
void swap (int * begin , int *end );
void hoareQuickSort(int data[],int be, int end);
#endif /* defined(__hanoi__quickSort__) */
