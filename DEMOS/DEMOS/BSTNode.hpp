//
//  BSTNode.hpp
//  DEMOS
//
//  Created by unbong on 16/6/3.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef BSTNode_hpp
#define BSTNode_hpp

#include <stdio.h>
#include <stdlib.h>


class TreeNode {
public:
    int data;
    TreeNode * left = NULL;
    TreeNode * right= NULL;
    
public:
    TreeNode();
    TreeNode(int pdata);
    ~TreeNode();
};

class BSTimpl{
public:
    TreeNode * root=NULL;
    
public:
    BSTimpl();
    ~BSTimpl();
    void insertNode(int data, TreeNode ** proot);
    void deleteNode(int data);
    void inOrder(TreeNode * proot, int & prevData,int & maxCount, int & countTmp);
};


#endif /* BSTNode_hpp */
