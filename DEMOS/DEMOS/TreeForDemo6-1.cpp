//
//  TreeForDemo6-1.cpp
//  DEMOS
//
//  Created by unbong on 16/1/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "TreeForDemo6-1.hpp"


struct Tree2 * createTree2(){
    //root
    struct Tree2 * root ;
    root = (Tree2 *)malloc(sizeof(struct Tree2));
    root->data = 1;
    
    //root->left
    root->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->data = 2;
    
    //root->left->left
    root->left->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->left->data = createRandomInt(0,20);
    
    //root->left->right
    root->left->right = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->right->data = 5;
    
    //root->left->left->left
    root->left->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->left->data = 8;
    
    
    //root->rifht
    root->right = (Tree2 *)malloc(sizeof(struct Tree2));
    root->right->data = 3;
    
    //root->rifht->left
    root->right->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->right->left->data = 6;
    
    //root->rifht->rigth
    root->right->right = (Tree2 *)malloc(sizeof(struct Tree2));
    root->right->right->data = createRandomInt(0,20);
    
    
    
    //paku
    root->left->left->left=NULL;
    root->left->left->right=NULL;
    root->left->right->left=NULL;
    root->left->right->right=NULL;
    root->right->left->left=NULL;
    root->right->left->right=NULL;
    root->right->right->left=NULL;
    root->right->right->right=NULL;
    
    
    

    return root;
}
