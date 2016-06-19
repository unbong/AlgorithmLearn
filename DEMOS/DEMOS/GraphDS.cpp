//
//  GraphDS.cpp
//  DEMOS
//
//  Created by unbong on 16/4/2.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "GraphDS.hpp"

GraphDS_ADJmatrix::GraphDS_ADJmatrix(){
    
}

GraphDS_ADJmatrix::GraphDS_ADJmatrix(int pv, int pe){
    V=pe;
    E=pe;
    adj =  new int *[V];
    for(int i = 0; i<V; i++){
        adj[i] = new int [V];
    }
}
//
GraphDS_ADJmatrix::~GraphDS_ADJmatrix(){
    for(int i = 0; i<V ; i++){
        delete [] adj[i];
    }
    delete[] adj;
}


GraphDS_ADJList::GraphDS_ADJList(){
    
}



GraphDS_ADJList::GraphDS_ADJList(int pv, int pe){
    V=pe;
    E=pe;
}

GraphDS_ADJList::~GraphDS_ADJList(){
    
}


GraphDS_AJDListNode::GraphDS_AJDListNode()
{
}

GraphDS_AJDListNode::GraphDS_AJDListNode(int pv)
{
    vetex = pv;
    nextNode = NULL;
}


GraphDS_AJDListNode::GraphDS_AJDListNode(int pv, int pdistance)
{
    vetex = pv;
    distance = pdistance;
    nextNode = NULL;
}

GraphDS_AJDListNode::~GraphDS_AJDListNode()
{
}