//
//  HashDemo.hpp
//  DEMOS
//
//  Created by unbong on 16/6/18.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef HashDemo_hpp
#define HashDemo_hpp

#include <stdio.h>
#include <vector>
#include "HashDS.hpp"

using namespace std;
class hashDemo{
public:
    hashDemo();
    ~hashDemo();
    
    //
    void createHashTable(hashtable ** hstable);
    
    int insertHash(hashtable ** hstable, int pdata);
    
    int deleteHash(hashtable ** hstable, int pdata);
    
    int searchHash(hashtable ** hstable, int pdata);
    
    int ReHash(hashtable ** hstable, int pdata);
    
    int Hash(int pdata);
};

#endif /* HashDemo_hpp */
