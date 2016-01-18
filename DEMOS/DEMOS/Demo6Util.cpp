//
//  Demo6Util.cpp
//  DEMOS
//
//  Created by unbong on 16/1/11.
//  Copyright © 2016年 unbong. All rights reserved.
//

#include "Demo6Util.hpp"

int createRandomInt(int start, int end){
    std::random_device rd;
    std::uniform_int_distribution<int> dist(start,end);
    return dist(rd);
}
