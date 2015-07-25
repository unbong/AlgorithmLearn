//
//  ExerciseLinkNode.cpp
//  hanoi
//
//  Created by unbong on 15/7/22.
//  Copyright (c) 2015年 unbong. All rights reserved.
//



#include "Linkedtable.h"
#include "ExerciseLinkNode.h"

//这个方法 有问题 检查时否为循环链表
bool isEndednull(struct ListNODE **head){
    
    struct ListNODE *current , *temp;
    int count = 1;
    bool result = false;
    
    if(head == NULL){
        printf ("It is empty");
        return false;
    }
    current = *head;
    temp = * head;
    while(true){
    
        temp = current->next;
        while(true){
            if(temp==NULL ){
                printf("It is ended NULL");
                result = false;
                break;
            }
            
            if(current ==temp->next){
                printf("It is xunhua lianbiao");
                result = true;
                count++;
                break;
                
            }
            temp = temp->next;
            
        }
        
        if(temp == NULL && count==1){
            break;
        }
        
        if (count == 2) {
            break;
        }
        current = current->next;
    }
    return result;
    
    
}




