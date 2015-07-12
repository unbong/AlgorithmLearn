//
//  Linkedtable.cpp
//  hanoi
//
//  Created by unbong on 15/7/5.
//  Copyright (c) 2015年 unbong. All rights reserved.
//
#include <cstdlib>
#include <stdio.h>


#include "Linkedtable.h"

struct ListNODE{
    int data;
    struct ListNODE *next;
};

//单链表

//统计链表的个数
int ListLength(struct ListNODE *head ){
    struct ListNODE *current=head;
    int count=0;
    if(current != NULL){
        while(current->next != NULL){
            count++;
            current = current->next;
        }
    }
    
    return count;
    
}

//追加链表
void InsertIninkedList(struct ListNODE **head , int data, int posotion ){
    
    int index =1;
    struct ListNODE *p, *q, *newNode;
    newNode = (ListNODE *)malloc(sizeof(struct ListNODE));
    
    if(!newNode){
        printf("Memorry Error");
        return;
    }
    newNode -> data = data;
    p = *head;
    if(posotion == 1){
        newNode -> next = p;
        *head = newNode;
    }else{
        while(index<posotion && p != NULL ){
            index++;
            //前一个地址
            q = p;
            //下一个地址
            p = p->next;
            
        }
        //新追加的
        q->next = newNode;
        //新追加的指针的下一个
        newNode->next = p;
        
    }
}
//单链表的删除
void deleteLikenList(struct ListNODE **head, int position){
    
    int index = 1;
     struct ListNODE *p, *q, *delNode;
    if(head == NULL){
        printf("Is Empty");
    }
    p = *head;
    if(position == 1){
        
        *head = (*head)->next;
        free(p);
        return;
    }else{
        
        while(p!=NULL && index < position){
            index++;
            //删除点之前的地址
            q = p;
            //删除点的地址
            p = p->next;
                   }
        if(p == NULL  ){
            printf("It is not exist");
            
        }else{
            q->next = p->next;
            
        }
        free(p);
    }
    
}

// #################################################
//双链表