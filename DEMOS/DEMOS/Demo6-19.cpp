//
//  Demo6-19.cpp
//  DEMOS
//
//  Created by unbong on 16/1/24.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6-19.hpp"

int findLevelMax(struct Tree2 * tree){
    int currentSum=0, maxSum=0;
    int level = 0, maxLevel=0;
    struct QueueForDemo6_5 * queue = createQueue(15);
    struct Tree2 * tmp;
    enQueue(queue, tree);
    enQueue(queue, NULL);
    while(! isEmpty(queue)){
        tmp = deQueue(queue);
        if(tmp == NULL){
            enQueue(queue, NULL);
            if(currentSum > maxSum){
                maxSum = currentSum ;
                maxLevel = level;
            }
            currentSum = 0;
            level ++;
            
        }else{
            currentSum += tmp->data;
            if(tmp->left != NULL){
                enQueue(queue, tmp->left);
            }
            if(tmp->right != NULL){
                enQueue(queue, tmp->right);
            }
        }
    }
    printf("maxLevel: ");
    printf("%d",maxLevel);
    return maxSum;
}

void excute6_19(){
    struct Tree2 * tree = createTree2();
    int result = findLevelMax(tree);
    printf("¥n");
    printf("maxvalue:");
    printf("%d", result);
}