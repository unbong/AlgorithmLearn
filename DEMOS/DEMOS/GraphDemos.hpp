//
//  GraphDemos.hpp
//  DEMOS
//
//  Created by unbong on 16/4/2.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef GraphDemos_hpp
#define GraphDemos_hpp

#include <stdio.h> 
#include "GraphDS.hpp"
class GraphDemo{
public:
    GraphDemo();
    ~GraphDemo();
    //
    GraphDS_ADJmatrix * createGraphAdjMatrix();
    
    GraphDS_ADJList * createGraphAdjList();
    
    //DFS
    
    
    // 6-10 demo
    int searchPathDFS(GraphDS_ADJmatrix * graph, int s, int d);
    
};

#endif /* GraphDemos_hpp */
