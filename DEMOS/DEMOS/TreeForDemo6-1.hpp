//
//  TreeForDemo6-1.hpp
//  DEMOS
//
//  Created by unbong on 16/1/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef TreeForDemo6_1_hpp
#define TreeForDemo6_1_hpp

#include <stdio.h>
#include <cstdlib>
#include "Demo6Util.hpp"


struct Tree2{
    int  data;
    struct Tree2 * right = NULL;
    struct Tree2 * left = NULL;
};

struct Tree2 * createTree2();

#endif /* TreeForDemo6_1_hpp */
