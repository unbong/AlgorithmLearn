//
//  Linkedtable.h
//  hanoi
//
//  Created by unbong on 15/7/5.
//  Copyright (c) 2015年 unbong. All rights reserved.
//

#ifndef __hanoi__Linkedtable__
#define __hanoi__Linkedtable__

int ListLength(struct ListNODE *head );

void InsertIninkedList(struct ListNODE **head , int data, int posotion);

void deleteLikenList(struct ListNODE **head, int position);

void insertNewNode(struct DLLNode ** head, int data, int position);

void deleteDllNode(struct DLLNode **head, int posotion);

#endif /* defined(__hanoi__Linkedtable__) */
