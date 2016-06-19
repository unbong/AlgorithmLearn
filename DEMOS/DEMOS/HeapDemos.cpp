//
//  HeapDemos.cpp
//  DEMOS
//
//  Created by unbong on 16/3/3.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "HeapDemos.hpp"

HeapNode * HeapDemos::getHeapData(){
    return heapData;
}

void HeapDemos::setHeapData(HeapNode * data){
    heapData = data;
}

HeapNode * HeapDemos::createHeapData(int pcapacity, int pheap_type){
    heapData = new HeapNode(pcapacity, pheap_type);
    
    return heapData;
}

HeapNode * HeapDemos::buildHeap(int * data, int n){
    
    HeapNode * heap = new HeapNode(n, 0);
    for (int i = 0; i<n; i++) {
        heap->array[i] = data[i];
    }
    heap->count = n;
    for(int i=(n-1)/2; i>=0;i--){
        percolateDown(heap, i);
    }
    return heap;
}

void HeapDemos::percolateDown(HeapNode *heap, int i){
    int right, left, temp, max;
    left=leftChild(heap,i);
    right = rightChid(heap, i);
    if(right == -1 && left == -1)
        return;
    if(left != -1 &&heap->array[left]>heap->array[i]){
        max = left;
    }
    else{
        max = i;
    }
    if(right != -1&& heap->array[right]>heap->array[max]){
        max = right;
    }
    
    if(max != i){
        temp = heap->array[i];
        heap->array[i]=heap->array[max];
        heap->array[max] = temp;
        percolateDown(heap, max);
    }
   
}

int HeapDemos::rightChid(HeapNode *heap, int i){
    int result = i*2+2;
    if(result > heap->count){
        return -1;
    }
    return result;
}

int HeapDemos::leftChild(HeapNode *heap,int i){
    int result = i*2+1;
    if(result > heap->count){
        return -1;
    }
    return result;
}