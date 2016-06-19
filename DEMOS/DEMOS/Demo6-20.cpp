//
//  Demo6-20.cpp
//  DEMOS
//
//  Created by unbong on 16/1/24.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6-20.hpp"


void printPath(struct Tree2 * root , int path[], int pathln){
    if(root == NULL){
        return;
    }
    path[pathln] = root->data;
    pathln++;
    if(root->left == NULL && root->right == NULL){
        printArray(path, pathln);
    }
    else{
        if(root->left != NULL){
            printPath(root->left, path, pathln);
        }
        if(root->right != NULL){
            printPath(root->right, path, pathln);
        }
    }
}

void printArray(int path[], int len){
    for(int i = 0; i<len; i++){
        printf("%d", path[i]);
        if(i !=len-1){
           printf(",");
        }else{
            printf("\n");
        }
        
    }
}

void excute6_20(){
    struct Tree2 * root = createTree2();
    int path[10];
    printPath(root, path, 0);
}