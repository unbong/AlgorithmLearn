//
//  Demo6-22.cpp
//  DEMOS
//
//  Created by unbong on 16/1/24.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6-22.hpp"

int sumValueTree(struct Tree2 * root){
    if(root == NULL){
        return 0;
    }
    return (sumValueTree(root->left) + root->data + sumValueTree(root->right));
}

void excute6_22(){
    struct Tree2 * root = createTree2();
    int result = sumValueTree(root);
    printf("%d", result);
}