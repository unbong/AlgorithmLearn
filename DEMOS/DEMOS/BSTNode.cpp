//
//  BSTNode.cpp
//  DEMOS
//
//  Created by unbong on 16/6/3.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "BSTNode.hpp"


TreeNode::TreeNode(){
    
}

TreeNode::TreeNode(int pdata){
    data = pdata;
}

TreeNode::~TreeNode(){
    
}


BSTimpl::BSTimpl(){
    
}

BSTimpl::~BSTimpl(){
    
}

void BSTimpl::insertNode(int data, TreeNode ** proot){
    
    TreeNode * rootTMP = *proot;
    
    if (rootTMP == NULL) {
        rootTMP = new TreeNode(data);
        *proot = rootTMP;
        return;
    }
    
    if(data > rootTMP->data){
        if(rootTMP->right == NULL){
            rootTMP->right = new TreeNode(data);
        }
        else {
            insertNode(data, &(rootTMP->right));
        }
    }else if(data<= rootTMP->data){
        if(rootTMP->left == NULL){
            rootTMP->left = new TreeNode(data);
        }
        else{
            insertNode(data, &(rootTMP->left));
        }
    }
    *proot = rootTMP;
}

void BSTimpl::deleteNode(int data){
    
}

void BSTimpl::inOrder(TreeNode * proot,int & prevData,int & maxCount, int & countTmp)
{
    if(proot==NULL){
        return ;
    }
    inOrder(proot->left,prevData,maxCount,countTmp);
    int currentData =proot->data;
    
    if(prevData == NULL){
        maxCount = 1;
        countTmp = 1;
    }else if(prevData != NULL && prevData != currentData){
        countTmp = 1;
    }
    else if(prevData != NULL && prevData == currentData){
        countTmp ++;
    }
    
    
    if(countTmp > maxCount){
        maxCount = countTmp;
    }
    prevData = currentData;

    inOrder(proot->right,prevData, maxCount, countTmp);
}