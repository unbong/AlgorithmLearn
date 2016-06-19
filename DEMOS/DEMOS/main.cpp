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
#include "StackDemo4-3.hpp"
#include "StackDemo4-1.hpp"
#include "StackDemo4-8.hpp"
#include <string>
#include "StackDemo4-11.hpp"
#include "Demo4-24.hpp"
#include "ForDemo4-12Stack.hpp"
#include "QueueDemo.hpp"
#include "Queue5_ListNode.hpp"
#include "DemoQueue5-3.hpp"
#include "QueueDemo5_4.hpp"
#include "QuedeDemo5_5.hpp"
#include "Demo6-1.hpp"
#include "TreeDemo6-2.hpp"
#include "Demo6-7.hpp"
#include "Demo6-19.hpp"
#include "Demo6-20.hpp"
#include "Demo6-21.hpp"
#include "Demo6-22.hpp"
#include "Demo6-24.hpp"
#include "HeapDemos.hpp"
#include "GraphDemos.hpp"
#include "sortDemo.hpp"
#include "BSTNode.hpp"
#include "SearchDemo.hpp"
#include "HashDemo.hpp"








int main(int argc, const char * argv[]) {
    
    std::string abc = "abcde";
    char p;
    int a;
    
    for(int i=0;i<abc.length();i++)
    {
        p = abc[i];
        
        a =3;
        
    }

    
    //stack结构
   // Demo4_1Test();
    
    //4-2
    //
  
   // std::string result = excute();
    //4-3
    //excute4_3(result);
    
    //4-8
    // excute4_8();
    
    //4-11
    //excute4_11();
    //4-12
    
//    charStakc stakc;
//    stakc.excute4_12();
    
//    charStakc * aaa = new charStakc();
//    aaa->excute4_12();
//    
//    delete aaa;
    //4-24
//    Demo4_24 * demo424 = new Demo4_24();
//    demo424->excute4_24();
    
    //Queue-5
   // test();
    
    //Queue-5 ListNode
   // excute5ListNode();
    
    //Queue5-3
   // excute5_3();
    
    //Queue5-4
//    SlidingWindow *sw = new SlidingWindow();
//    sw->excute5_4();
    
    //Queue5-5
//    QueueMoveToStack *queuetostack = new QueueMoveToStack();
//    queuetostack->excute5_5();
    
   // excute6_1();
    //excute6_2();
    
    //6-7
    //excute6_7();
    
    //6-19
   // excute6_19();
    //6-20
    //excute6_20();
    //6-21
   // excute6_21();
    //6-22
   // excute6_22();
    //6-24
   // excute6_24();
    //int data[10] = {12,9,20,3,15,15,13,13,13,12};
//    HeapDemos * heapDemo = new HeapDemos();
//    HeapNode * heap = heapDemo->buildHeap(data, 10);
//    for(int i = 0; i< 10; i++){
//        printf("%d," ,heap->array[i]);
//    }
//    GraphDemo * gDemo = new GraphDemo();
//    gDemo->createGraphAdjMatrix();
    //gDemo->createGraphAdjList();
//    BSTimpl * bstImpl = new BSTimpl();
//    TreeNode * root = NULL;
//    
//    TreeNode ** rootPaku = &root;
//    for (int i=0; i<10;i++){
//        bstImpl->insertNode(data[i], &root);
//       // bstImpl->insertNode(data[i], rootPaku);
//
//    }
//    int prevData = NULL;
//    int maxCount = 0;
//    int countTmp = 0;
//    bstImpl->inOrder(root,prevData,maxCount, countTmp);
//    printf("maxcount: %d", maxCount);
    
    //sortDemo * sDemo = new sortDemo();
    //sDemo->excuteFlow();
    //SearchDemo * searchDemo = new SearchDemo();
    //searchDemo->excuteFlow();
    hashDemo * hsDemo = new hashDemo();
    hashtable * hstable = NULL;
    hashtable ** hstable2 = &hstable;
    hsDemo->createHashTable(hstable2);
    hsDemo->insertHash(hstable2, 1);
    hsDemo->insertHash(hstable2, 21);
    hsDemo->insertHash(hstable2, 22);
    
    return 0;
}
