//
//  Demo6-7.cpp
//  DEMOS
//
//  Created by unbong on 16/1/21.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6-7.hpp"


void sizeOfTree(struct Tree2 * tree){
    int count = 0;
    struct QueueForDemo6_5 * queue =  createQueue(10);
    
    while(true){
        if(tree != NULL){
            count = 1;
            if(tree->left != NULL){
                enQueue(queue, tree->left);
            }
            if(tree->right != NULL){
                enQueue(queue, tree->right);
            }
            tree = deQueue(queue);
            if(tree != NULL){
                count++;
            }
            if(isEmpty(queue)){
                printf("%d", count);
                break;
            }
        }
    }
    
}
void excute6_7(){
    struct Tree2 * tree = createTree2();
    sizeOfTree(tree);
}
