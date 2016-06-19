//
//  HeapNode.hpp
//  DEMOS
//
//  Created by unbong on 16/3/3.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef HeapNode_hpp
#define HeapNode_hpp

#include <stdio.h>
#include <stdlib.h>
class HeapNode{
public:
    int * array;
    int capacity;
    int count;
    int heap_type;
public:
    HeapNode();
    ~HeapNode();
    HeapNode(int pcapacity, int pheap_type);
    
};

#endif /* HeapNode_hpp */
