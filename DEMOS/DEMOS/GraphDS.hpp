//
//  GraphDS.hpp
//  DEMOS
//
//  Created by unbong on 16/4/2.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef GraphDS_hpp
#define GraphDS_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class GraphDS_ADJmatrix{
public:
    int V;
    int E;
    int ** adj;
    //
public:
    GraphDS_ADJmatrix();
    GraphDS_ADJmatrix(int pv, int pe);
    ~GraphDS_ADJmatrix();
    
};

class GraphDS_ADJList{
public:
    int V;
    int E;
    int * adj;
public:
    GraphDS_ADJList();
    GraphDS_ADJList(int pv, int pe);
    ~GraphDS_ADJList();    
};


#endif /* GraphDS_hpp */
