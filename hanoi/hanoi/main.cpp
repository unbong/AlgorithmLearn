//
//  main.cpp
//  hanoi
//
//  Created by unbong on 15/7/5.
//  Copyright (c) 2015年 unbong. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include "Linkedtable.h"



//ハノイの塔
//void hannoi(int n ,char frompeg ,char topeg, char auxpeg){
//    if(n ==1){
//        printf("Move disk 1 from peg %c to peg %c \n" , frompeg, topeg);
//        return;
//    }
//    //上からN−１枚の円盤を
//    hannoi(n-1, frompeg,auxpeg , topeg);
//    
//    //残りの円盤をAからCへ
//    printf("Move disk %d from peg %c to peg %c \n", n ,frompeg, topeg);
//    
//    hannoi(n-1, auxpeg,topeg, frompeg);
//
//}





int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
    
    int n;
//    std::cout << "please input n \n";
 //   std::cin >> n;
//    hannoi(n, 'A', 'B', 'c');
//    Binary(n);
    

    struct ListNODE *head1=NULL;
    struct ListNODE **head =&head1;
    
   
    
    
    //单恋表的使用
//    InsertIninkedList(head,1,1);
//    InsertIninkedList(head,2,3);
//    InsertIninkedList(head,3,3);
//    InsertIninkedList(head,3,2);
//    deleteLikenList(head, 5);
    
    //双链表
    struct DLLNode *head2 = NULL;
    struct DLLNode **headDLL = &head2;
    
    insertNewNode(headDLL, 1,1);
    insertNewNode(headDLL, 2,2);
//    insertNewNode(headDLL, 3,3);
//    insertNewNode(headDLL, 4,2);
    deleteDllNode(headDLL, 1);
    

//    int num = ListLength(head1);
//    std::cout<< "num=" << num;
    
    return 0;
}
