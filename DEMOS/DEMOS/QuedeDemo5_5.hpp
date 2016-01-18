//
//  QuedeDemo5_5.hpp
//  DEMOS
//
//  Created by unbong on 16/1/1.
//  Copyright © 2016年 unbong. All rights reserved.
//

#ifndef QuedeDemo5_5_hpp
#define QuedeDemo5_5_hpp

#include <stdio.h>
#include "ForDemo4-3Stack.hpp"
#include "QueueDemo.hpp"
class QueueMoveToStack{
private:
    struct ArrayStackFor4_3 * stack;
    struct QueueDemo *queue;
public:
    QueueMoveToStack(){};
    ~QueueMoveToStack(){};
    void createData();
    void reserveData();
    void excute5_5();
};


#endif /* QuedeDemo5_5_hpp */
