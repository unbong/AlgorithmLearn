//
//  HashDS.hpp
//  DEMOS
//
//  Created by unbong on 16/6/18.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef HashDS_hpp
#define HashDS_hpp
#define LOAD_FACTOR 20
#include <stdio.h>
#include <vector>

using namespace std;
class listnode{
public:
    int key ;
    listnode * nextNode = NULL;
    listnode();
    ~listnode();
};

class hashnode{
public:
    int count = 0;
    listnode * node = NULL;
    hashnode();
    ~hashnode();
};

class hashtable{
public:
    hashnode ** table = NULL;
    int count = 0;
    int tsize = 0;
    hashtable();
    ~hashtable();
};


#endif /* HashDS_hpp */
