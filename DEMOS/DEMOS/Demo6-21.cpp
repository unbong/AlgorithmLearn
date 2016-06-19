//
//  Demo6-21.cpp
//  DEMOS
//
//  Created by unbong on 16/1/24.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include <vector>
#include "Demo6-21.hpp"

using namespace std;

//void  checkPathIsExistInputValue(struct Tree2 * root,int sum, int *array, int pathIndex){
//    
//    if(root == NULL){
//        return;
//    }
//    sum += root->data;
//    if(root->left == NULL && root->right == NULL){
//        array[pathIndex] = sum;
//        sum =0;
//        pathIndex ++;
//    }else{
//        if(root->left != NULL){
//            checkPathIsExistInputValue(root->left, sum, array, pathIndex);
//        }
//        if(root->right != NULL){
//            checkPathIsExistInputValue(root->right, sum, array, pathIndex);
//
//        }
//    }
//}

void  checkPathIsExistInputValue(struct Tree2 * root,int sum, vector<int> & array){

    if(root == NULL){
        return;
    }
    sum += root->data;
    if(root->left == NULL && root->right == NULL){
        array.push_back(sum);
        sum =0;
        
    }else{
        if(root->left != NULL){
            checkPathIsExistInputValue(root->left, sum, array);
        }
        if(root->right != NULL){
            checkPathIsExistInputValue(root->right, sum, array);

        }
    }
}




void excute6_21(){
    
    vector<int> array;
    
    //int * array;
    
    struct Tree2 * root = createTree2();
    checkPathIsExistInputValue(root, 0, array);
    for(int i=0; i<array.size() ; i++){
        if(20 == array[i]){
            printf("Is Exists");
        }else{
            printf("Is Not Exists");
        }
    }
}