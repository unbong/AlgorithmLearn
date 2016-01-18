//
//  Demo6-1.cpp
//  DEMOS
//
//  Created by unbong on 16/1/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6-1.hpp"
#include "TreeForDemo6-1.hpp"



int findMacestInTree2(struct Tree2 * root){
    int max = INT_MIN, leftData ,rightData;
    if(root != NULL){
        max =root->data;
        int leftData = findMacestInTree2(root->left);
        leftData>max ? max=leftData: max=max;
        int rightData = findMacestInTree2(root-> right);
        rightData>max ? max =rightData : max = max;
    }
    return max;
}

void excute6_1 (){
    int result = findMacestInTree2(createTree2());
    printf("\n The max is:");
    printf("%d",result);
}