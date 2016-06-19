//
//  HeapDemos.hpp
//  DEMOS
//
//  Created by unbong on 16/3/3.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef HeapDemos_hpp
#define HeapDemos_hpp

#include <stdio.h>
#include "HeapNode.hpp"

class HeapDemos{
private:
    class HeapNode * heapData;
    
public:
    HeapNode *  getHeapData();
    void setHeapData(HeapNode * data);
    HeapNode * createHeapData(int pcapacity, int pheap_type);
    HeapNode * buildHeap(int * data, int n);
    void percolateDown(HeapNode * heap, int i);
    int rightChid(HeapNode * heap , int i);
    int leftChild(HeapNode * heap ,int i);
};

#endif /* HeapDemos_hpp */
