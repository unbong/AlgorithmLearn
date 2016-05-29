//
//  GraphDemos.cpp
//  DEMOS
//
//  Created by unbong on 16/4/2.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "GraphDemos.hpp"

GraphDemo::GraphDemo(){
    
}

GraphDemo::~GraphDemo(){
    
}
//

GraphDS_ADJmatrix * GraphDemo::createGraphAdjMatrix(){
    int e, v, i, u;
    cout << "Grapg's V";
    cin >> v;
    cout << "Grapg's E";
    cin >> e;
    GraphDS_ADJmatrix * result = new GraphDS_ADJmatrix(v,e);
    for(int i=0; i<result->V; i++)
        for(int j=0; j<result->V; j++)
            result->adj[i][j]=0;
    int uv[]={0,1,1,2,1,7,2,3,2,4,4,5,4,6,4,7};
    
    for(int i=0; i<result->E; i++){
//        cout << "read Edges u" ;
//        cin >> u;
//        cout << "read Edges v" ;
//        cin >> v;
        
        result->adj[uv[2*i]][uv[2*i+1]]=1;
        result->adj[uv[2*i+1]][uv[2*i]]=1;
    }
    return result;
}

GraphDS_ADJList * GraphDemo::createGraphAdjList(){
    int v, e, x, y, distance;
    
    cout << "Grapg's V";
    cin >> v;
    cout << "Grapg's E";
    cin >> e;
    GraphDS_ADJList * result = new GraphDS_ADJList(v,e);
    GraphDS_AJDListNode * tempx = NULL;
    GraphDS_AJDListNode * tempy = NULL;
    
    for (int i = 0; i < result->V;i++) {
        result->adj[i] = (int)(size_t)new GraphDS_AJDListNode(i);
        ((GraphDS_AJDListNode*)(result->adj[i]))->entried = 0 ;
        ((GraphDS_AJDListNode*)(result->adj[i]))->nextNode = (GraphDS_AJDListNode*)(result->adj[i]);
    }
    //
    // 用于执照拓扑排序的数据
    //int arrvtemp[] = {7,11,7,8,5,11,3,8,3,10,11,2,11,9,11,10,8,9};
    // 用于制造最短路径的数据
    //int arrvtemp[] = { 0,1,0,3,1,3,1,4,2,0,2,5,3,5,3,6,4,6,6,5 };
    // 用于执照最短路径的Dijkstra算法的数据
    int arrvtemp [] = { 0,1,4,0,2,1,1,4,4,2,1,2,2,3,4,3,4,4 };
    for (int i = 0; i < result->E; i++) {
        //
        /*cout << "Grapg's x&y";
         cin >> x>>y;*/
        //
        x = arrvtemp[2 * i];
        y = arrvtemp[2 * i + 1];
        // Dijkstra算法而计算
        distance = arrvtemp[2 * i + 2];
        tempx = new GraphDS_AJDListNode(x);
        
        //tempy = new GraphDS_AJDListNode(y);
        // Dijkstra算法而计算
        tempy = new GraphDS_AJDListNode(y, distance);
        // step1 元のノードの次を新ノードの次に埋める
        GraphDS_AJDListNode* next=((GraphDS_AJDListNode*)result->adj[x])->nextNode;
        tempy->nextNode = next;
        // step2 新のーどをｘの次に埋める
        GraphDS_AJDListNode* ppp = (GraphDS_AJDListNode*)result->adj[x];
        ppp->nextNode = tempy;
        // count node entryied
        int tempEntry = ((GraphDS_AJDListNode*)result->adj[y])->entried;
        tempEntry++;
        ((GraphDS_AJDListNode*)result->adj[y])->entried = tempEntry;
        //((GraphDS_AJDListNode*)result->adj[x])->nextNode = tempy;
        
        
    }
    return result;}


int GraphDemo::searchPathDFS(GraphDS_ADJmatrix * graph, int s, int d){
    int result = 0;
    
    
    return result;
}

