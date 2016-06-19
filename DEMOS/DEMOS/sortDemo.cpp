//
//  sortDemo.cpp
//  DEMOS
//
//  Created by unbong on 16/5/15.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "sortDemo.hpp"
#include <algorithm>

using namespace std;

sortDemo::sortDemo(){
    
}
sortDemo::~sortDemo(){
    
}

void sortDemo::excuteFlow(){
    
    //int  data1[11] ={1,4,7,10,13,16,19,22,25,28 ,31};
    //int  data[11] ={2,5,8,11,14,17,20,23,26,29 ,32};
    //int data[11] = {0,2,1,2,1,0,0,1,2,0,1};
    //int  tmp[11] = {3,6,9,12,15,18,21,24,27,30,33};
    
    int * result = new int(10);
    //int * result =bubbleSort(data, 10);
    //int * result = selectionSort(data, 10);
    //int * result = insertionSort(data, 10);
    //int * result = shellsort(data, 10);
    //mergeSort(data, tmp, 0, 9);
    //quickSort(data, 9, 0);
    //countingSort(data, 47, tmp, 10);
    //int result = findMax(data, 11);
    //printf("max point %d",result);
    
    //findABK(data, tmp, 11);
    //sortlogk(data, 11);
    //mergeNArray(data1,data,tmp,result,11);
    
    int data[1000];
    for (int i=0; i<1000;i++){
        data[i] = i;
    }
    findTo10(data, result , 1000);
    printf("\n");
    for(int i = 0;i<10; i++){
        printf("%d,",result[i]);
    }
    printf("\n");
//    for(int i = 0;i<10; i++){
//        printf("%d,",tmp[i]);
//    }
    
}

int * sortDemo::bubbleSort(int * d, int n){
    
    int tmp, swapped=1;
    
    for(int i = n-1;i>=0 ;i--){
        swapped = 0;
        for(int j = 0;j<=i-1;j++){
            if(d[j]>d[j+1]){
                tmp = d[j];
                d[j] = d[j+1];
                d[j+1] = tmp;
                swapped = 1;
            }
        }
    }
    
    return d;
}

int * sortDemo::selectionSort(int * d, int n){
    int tmp, min;
    for(int i = 0; i<n;i++){
        min = i;
        for(int j =i+1;j<n;j++){
            if(d[min]>d[j]){
                min = j;

            }
        }
        tmp = d[min];
        d[min] = d[i];
        d[i] = tmp;
        
    }
    
    return d;
}

int * sortDemo::insertionSort(int* d, int n){
    
    int extractedData, j;
    // 从第二个节点开始
    for (int i = 2; i<n; i++) {
        //被抽出节点的缓存
        extractedData = d[i];
        //
        j=i;
        // 与已经排好序的当前节点的前一个节点比较
        while(d[j-1]>extractedData && j>0){
            // 交换
            d[j]=d[j-1];
            j--;
        }
        // 插入到目前
        d[j] = extractedData;
    }
    
    return d;
}


int * sortDemo::shellsort(int *d, int len){
    
    int i,j,h,v;
    //分割步长
    for (h=0; h<len/9; h=3*h+1) ;
    
    for(;h>0;h=h/3){
        for (i=h+1; i<len; i++) {
            v=d[i];
            j=i;
            while(d[j-h]>v && j>h){
                d[j]= d[j-h];
                j -=h;
            }
            d[j] = v;
        }
    }
    
    return d;
}


//这个真心不懂
void sortDemo::mergeSort(int *d, int *tmp, int left, int right){
    int mid;
    if(left < right){
        mid = (left+right)/2;
        mergeSort(d, tmp, left, mid);
        mergeSort(d, tmp, mid+1, right);
        merge(d, tmp, left, mid+1, right);
    }
    
}

void sortDemo::merge(int * d, int * tmp, int left, int mid, int right){
    
    int i, left_end, size, tmp_pos;
    left_end = mid-1;
    tmp_pos=left;
    size=right-left+1;
    
    while((left<=left_end)&&(mid<=right)){
        if(d[left]<=d[mid]){
            tmp[tmp_pos] = d[left];
            tmp_pos++;
            left++;
        }
        else{
            tmp[tmp_pos] = d[mid];
            tmp_pos++;
            mid++;
        }
    }
    
    while(left<=left_end){
        tmp[tmp_pos] = d[left];
        left++;
        tmp_pos++;
    }
    while(mid<=right){
        tmp[tmp_pos]=d[mid];
        mid++;
        tmp_pos++;
        
    }
    
    for(i=0; i <= size; i++){
        d[right] = tmp[right];
        right--;
    }
}


//利用分治算法，将小于分割点的放在左边，大于分割点的放在右边
void sortDemo::quickSort(int * d, int right, int left){
    int pivot = 0;
    if (left < right) {
        pivot =partition(d, right, left);
        quickSort(d, pivot-1, left);
        quickSort(d, right, pivot+1);
    }
}
//
int sortDemo::partition(int * d, int hight, int low){
    int left, right, pivot_item = d[low];
    int tmp=0;
    left = low;
    right = hight;
    while (left< right) {
        while (d[left]<=pivot_item) {
            left++;
        }
        
        while (d[right]> pivot_item) {
            right--;
        }
        if(left < right){
            tmp = d[left];
            d[left]= d[right];
            d[right]=tmp;
        }
    }
    d[low]=d[right];
    d[right]=pivot_item;
    
    return right;
}

// 需要先知道要排序数组的氛围
void sortDemo::countingSort(int *d, int k, int *b, int n){
    int * c = new int(k);
    
    for (int i = 0 ; i<k;i++){
        c[i] = 0;
    }
    
    for (int j = 0; j<n; j++) {
        c[d[j]] = c[d[j]] +1;
    }
    for (int i = 1; i<k; i++) {
        c[i] = c[i-1]+c[i];
    }
    
    for(int j=n-1;j>=0;j--){
        b[c[d[j]]] = d[j];
        c[d[j]] = c[d[j]]-1;
    }
}


//10-3 在一个数组中寻找出现最多的数
int sortDemo::findMax(int * d, int n){
    int result = 0;
    int max = 1;
    int counter = 1;
    quickSort(d, 10, 0);
    for(int i = 0;i<n; i++){
        printf("%d,",d[i]);
    }
    printf("\n");
//    for(int j = 0; j<n; j++){
//        for(int i = j;i<n;i++){
//            if (d[i] == d[j]) {
//                counter ++;
//            }
//        }
//        
//        if (max == counter) {
//            
//        }
//        if(max <counter){
//            max = counter;
//            result = d[j];
//        }
//    }
    
    for(int i = 0; i<n-1;i++){
        if(d[i] == d[i+1]){
            counter++;
        }else {
            counter = 1;
        }
        
        if(counter>max){
            result = d[i];
            max = counter;
        }
    }
    
    return result;
}

//10-9
void sortDemo::findABK(int * d, int *e, int n){
    quickSort(d, 10, 0);
    quickSort(e, 10, 0);
    
    for(int i=0;i<n;i++){
        int a = d[i];
        int k = 100-a;
        int flg = false;
        for(int j=n-1;j>0;j--){
            if(k==e[j]){
                flg = true;
                break;
            }
        }
        if(flg){
            printf("is exists");
            break;
            
        }
    }
}
//10-22
void sortDemo::sortlogk(int *d, int n){
    int tmpStart= 0;
    int tmpEnd = n;
    for(int i = 0; i<n-1; i++){
        if(d[i]>=d[i-1]){
            tmpStart = i;
            break;
        }else{
            printf("it is not exist unsorted");
            return ;
        }
        
    }
    for(int i = tmpStart; i<n-1; i++){
        if(d[tmpStart]<=d[i]){
            tmpEnd = i;
        }
    }
    
    quickSort(d, tmpEnd, tmpStart);
}


//10-24 对已经排好序的N个序列的Merge
void sortDemo::mergeNArray(int * data1,int * data2, int * data3, int* result, int n){
    quickSort(data1, n-1, 0);
    quickSort(data2, n-1, 0);
    quickSort(data3, n-1, 0);
    
    
    int i1 , i2 , i3 , index;
    i1 = i2 = i3 = index = 0;
    int datatmp1 = 0;
    int datatmp2 = 0;
    int datatmp3 = 0;
    int minValue = INT32_MAX;
    
    while ((i1<n || i2<n || i3<n)) {
        datatmp1 = 0;
        datatmp2 = 0;
        datatmp3 = 0;
        

        if(i1 >= n){
             datatmp1 = INT32_MAX;
        }else{
            datatmp1 = data1[i1];
        }
        
        if(i2 >= n){
             datatmp2 = INT32_MAX;
        }else{
            datatmp2 = data2[i2];
        }
        
        if(i3>=n){
             datatmp3 = INT32_MAX;
        }else{
            datatmp3 = data3[i3];
        }
        
        if(datatmp1 < datatmp2){
            minValue = datatmp1;
            
        }else {
            minValue = datatmp2;
        }
        
        if(datatmp3 < minValue){
            minValue = datatmp3;
        }
        
        if(minValue == datatmp1){
            i1++;
        }else if(minValue == datatmp2){
            i2++;
        }else if(minValue == datatmp3){
            i3++;
        }
        
        result[index++] = minValue;
        printf("%d,", minValue);
    }
    
    printf("\n");
}

//10-32 对1000000中选择最大的十个数
void sortDemo::findTo10(int * data, int * result , int n){
    const int count = 90;
    int index = 0;
    int pivotCount = 1000/90;
    int resultCount = 10;
    vector<int> datatmp;
    
    if(1000 % 90 != 0){
        pivotCount ++;
    }

    int currentStartIndex = 0;
    int currentEndIndex = 0;
    for(; index < pivotCount; index++){
        
        currentStartIndex = index*count;
        currentEndIndex = (index +1) * count;
        if (currentEndIndex > 1000){
            currentEndIndex = 1000;
        }
        for(int i =currentStartIndex ; i<currentEndIndex; i++){
                datatmp.push_back(data[i]);
        }
        if(index != 0){
            for(int i = 0; i<10; i++){
                datatmp.push_back(result[i]);
            }
        }
       
        make_heap(datatmp.begin(), datatmp.end());
        pop_heap(datatmp.begin(), datatmp.end());
        for(int i = 0; i< resultCount; i++){
           //
            int tmp =datatmp.back();
            result[i] = tmp;
            printf("%d, ",tmp);
            datatmp.pop_back();
        }
        printf("\n");
    }
}

//10-35

void sortDemo::nutAndBottle(int *pnut, int *pbottle, int left, int right){
    
}


int sortDemo::pivot(int *data, int left, int right){
    int result = 0;
    
    return result;
}


