//
//  TreeDemo6-2.cpp
//  DEMOS
//
//  Created by unbong on 16/1/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "TreeDemo6-2.hpp"

void findMaxTree2(struct Tree2 * root){
    struct Stack4Tree * stack = createStack4Tree();
    int max = INT_MIN;
    while(1){
        while(root){
            push(stack, root);
            root= root->left;
            
        }
        if(isEmpty(stack)){
            break;
        }
        struct Tree2 * root =  pop(stack);
        if(max<root->data){
            max = root->data;
        }
        root = root->right;
        
    }
    printf("%d", max);
}



void excute6_2(){
    struct Tree2 * root = createTree2();
    printf("reverse after");
    findMaxTree2(root);
    
}