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

struct DLLNode{
    int data ;
    struct DLLNode *next;
    struct DLLNode *prev;
    
};

void insertNewNode(struct DLLNode ** head, int data, int position){
    int index =1;
    struct DLLNode *newNode, *temp;
    newNode = (DLLNode *)malloc(sizeof(struct DLLNode));
    if(newNode == NULL ){
        printf("Memory Error");
    }
   
    newNode->data = data;
    if(position == 1){
        
        newNode -> next = *head;
        newNode->prev =NULL ;
        if(*head)(*head)->prev = newNode;
        *head = newNode;
        return;
    }else{
        temp = *head;
        while (temp != NULL && index < position-1){
            index++;
            temp = temp->next;
            
        }
        if(index != position ){
            printf("It is not exist");
        }
        newNode->next= temp->next;
        newNode->prev = temp;
        if(temp->next){
            temp->next->prev = newNode;
            temp->next = newNode;
        }
        
    }
}

//双链表的删除
//双链表的删除 没搞懂

void deleteDllNode(struct DLLNode **head, int posotion){
    int index =1;
    struct DLLNode *temp, *temp1;
    temp = *head;
    
    if(*head == NULL ){
        printf("List is empty");
    }
    
    if(posotion ==1){
        *head = (*head)->next;
        if(*head!=NULL)(*head)->next->prev = NULL ;
        free(temp);
        return;
    }
    else{
        while(index < posotion&& temp1->next!=NULL ){
            index++;
            temp1 = temp1->next;
        }
        if(index != posotion){
            printf("It is not exist\n");
        }
        if(temp1->next == NULL ){
            temp1->prev->next = NULL;
            free(temp1);
            return;
        }else{
            temp1->next->prev = temp1->prev;
            temp1->prev->next = temp1->next;
            free(temp1);
        }
        
        return;
    }
}

//#######################################################

//循环指针


typedef struct CLLNode{
    int data;
    struct CLLNode *next;
};
//统计个数
int CirucularListLength(struct CLLNode *head){
    struct CLLNode *current = head;
    int count =0;
    if (head != NULL ) {
        return count;
    }
    while(head != current->next ){
        count=1;
        current = current->next;
    }
    return count;
    
}

//打印

void printCirucularList(struct CLLNode *head){
    
    struct CLLNode *current = head;
    
    if(current == NULL  ){
        printf("It is empty");
        return;
    }
    
    do{
        printf("%d",current->data);
        current = current->next;
    }while(head != current);
}


// 插入到最后
void insertAtEndList(struct CLLNode **head,int data){
    struct CLLNode * current = *head;
    struct CLLNode *newNode = (CLLNode *)malloc(sizeof(struct CLLNode));
    
    if(head == NULL){
        printf("It is empty");
        return ;
    }
    while( current->next != *head){
        current = current->next;
    }
    newNode->next=newNode;
    if(*head == NULL){
        *head = newNode;
    }else{
    newNode->next = *head;
    current->next = newNode;
    }
    
}

//插入到最前

void insertAtFirstList(struct CLLNode **head,int data){
    struct CLLNode *newNode = (CLLNode *)malloc(sizeof(struct CLLNode));
    struct CLLNode *current;
    
    if(newNode == NULL ){
        printf("Memory error");
    }
    if(head == NULL){
        printf("It is empty");
        return;
    }
    
    newNode->data = data;
    current = *head;
    while(current->next != *head){
        current = current->next;
    }
    newNode->next = newNode;
   
    if(*head == NULL){
        *head = newNode;
    }else{
        current->next = newNode;
        newNode->next = *head;
        *head = newNode;
    }
    
}

//删除在最后

void deleteAtEndList(struct CLLNode **head){
    struct CLLNode *current = *head;
    struct CLLNode *temp;
    
    if(head == NULL){
        printf("it is empty");
        return;
    }
    
    while(current->next != *head){
        temp = current;
        current = current->next;
    }
    
    temp->next = current->next;
    free(current);
    return;
    
}

//删除在最前

void deleteAtFirstList(struct CLLNode **head){
    struct CLLNode *current = *head;
    struct CLLNode *temp;
    
    if(head == NULL){
        printf("it is empty");
        return;
    }
    
    while(current->next != *head){
        current = current->next;
    }
    
    temp = *head;
    current->next= temp->next;
    *head = (*head)->next;
    free(temp);
    
}
