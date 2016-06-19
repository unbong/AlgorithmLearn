//
//  HashDemo.cpp
//  DEMOS
//
//  Created by unbong on 16/6/18.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "HashDemo.hpp"
hashDemo::hashDemo(){
    
}
hashDemo::~hashDemo(){
    
}

void test( int * temp)
{
    

    
    temp = (int *)valloc(sizeof(int));
    *temp = 3;
    
 

}

void hashDemo::createHashTable(hashtable ** hstable){
    
    int * x = NULL;
    test(x);
   
    *hstable = new hashtable();
    hashnode * hsNode[LOAD_FACTOR] ;
    
    for(int i= 0; i<LOAD_FACTOR; i++){
        //hashnode * nodetmp = new hashnode();
        //hsNode[i] = nodetmp;
        
        hsNode[i] =new hashnode();
    }
    (*hstable)->tsize = LOAD_FACTOR;
    (*hstable)->table = hsNode;
}





int hashDemo::insertHash(hashtable ** hstable, int pdata){
    int result = 0;
    
    int hashValue = Hash(pdata);
    
    hashnode  hashNode = (*(*hstable)->table)[hashValue];
    if(hashNode.count == 0 && hashNode.node == NULL){
        listnode * node  = new listnode();
        node->key = pdata;
        node->nextNode = NULL;
        hashNode.node = node;
    }else{
        ReHash(hstable, pdata);
    }
    
    return result;
}

int hashDemo::ReHash(hashtable ** hstable, int pdata){
    int result = 0;
    
    return result;
}

int hashDemo::Hash(int pdata){
    
    return pdata%LOAD_FACTOR;
}

