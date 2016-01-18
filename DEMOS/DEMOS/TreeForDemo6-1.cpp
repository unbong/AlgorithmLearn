//
//  TreeForDemo6-1.cpp
//  DEMOS
//
//  Created by unbong on 16/1/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "TreeForDemo6-1.hpp"


struct Tree2 * createTree2(){
    struct Tree2 * root ;
    root = (Tree2 *)malloc(sizeof(struct Tree2));
    root->data = createRandomInt(0,20);
    
    root->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->data = createRandomInt(0,20);
    
    root->left->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->left->data = createRandomInt(0,20);
    
    root->left->right = (Tree2 *)malloc(sizeof(struct Tree2));
    root->left->right->data = createRandomInt(0,20);
    
    root->right = (Tree2 *)malloc(sizeof(struct Tree2));
    root->right->data = createRandomInt(0,20);
    
    root->right->left = (Tree2 *)malloc(sizeof(struct Tree2));
    root->right->left->data = createRandomInt(0,20);

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
