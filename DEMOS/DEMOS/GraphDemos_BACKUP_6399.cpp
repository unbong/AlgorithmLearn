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
    return NULL;
}