//
//  HeapNode.cpp
//  DEMOS
//
//  Created by unbong on 16/3/3.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "HeapNode.hpp"


HeapNode::HeapNode(){
    
}
HeapNode::~HeapNode(){
     free(array);
}
HeapNode::HeapNode(int pcapacity, int pheap_type ){
    capacity = pcapacity;
    heap_type = pheap_type;
    array = (int * )malloc(sizeof(int) * capacity);
    count = 0;
}