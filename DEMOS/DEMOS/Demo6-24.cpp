//
//  Demo6-24.cpp
//  DEMOS
//
//  Created by unbong on 16/1/24.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6-24.hpp"

void reverseTree(struct Tree2 * root){
    struct Tree2 * tmp;
    if(root == NULL){
        return ;
    }
    tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    if(root->left != NULL){
        reverseTree(root->left);
    }
    if(root->right != NULL){
        reverseTree(root->right);
    }
    
}

void printTree(struct Tree2 * root){
    if(root == NULL){
        return;
    }
    printf("%d, ", root->data);
    printf("\n");
    
    if(root->left != NULL){
        printTree(root->left);
    }
    if(root->right){
        printTree(root->right);
    }
}

void excute6_24(){
    struct Tree2 * root = createTree2();
    printTree(root);
    reverseTree(root);
    printf("\n");
    printf("reverse after");
    printf("\n");
    printTree(root);
    
}