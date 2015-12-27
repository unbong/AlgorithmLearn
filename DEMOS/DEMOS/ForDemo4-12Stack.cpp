//
//  ForDemo4-12Stack.cpp
//  DEMOS
//
//  Created by unbong on 15/12/26.
//  Copyright © 2015年 unbong. All rights reserved.
//

#include "ForDemo4-12Stack.hpp"

void charStakc::excute4_12()
{
    push('0',RIGHT);
    push('0',RIGHT);
    push('0',RIGHT);
    push('0',RIGHT);
    push('0',RIGHT);
    push('1',MIDDLE);
    //push('2',LEFT);
    push('1',MIDDLE);
    push('1',MIDDLE);
    push('1',MIDDLE);
    push('1',MIDDLE);
    push('1',MIDDLE);
    for(int index=0; index<10;index++){
        if(c[index]==NULL){
            printf(" ");
        }else{
            printf("%c",c[index]);
        }
    }
     printf("over");
}



    
void charStakc::push(char data, type type){
        switch (type) {
            case RIGHT:
                if(checkCanInsertt(type)){
                    c[--rigthIndex] = data;
                }else if(checkCanShiftMiddelStak(type)){
                    int index = middleStartIndex;
                    while( index<=middleIndex){
                        c[index-1] = c[index];
                        index++;
                    }
                    middleStartIndex--;
                    middleIndex--;
                    c[--rigthIndex]= data;
                }else{
                    printf("Stack Is Full");
                }
                
                break;
            case LEFT:
                if(checkCanInsertt(type)){
                    c[++leftIndex] = data;
                }else if(checkCanShiftMiddelStak(type)){
                    int index = middleIndex;
                    while(  index >=middleStartIndex){
                        c[index+1] = c[index];
                        index++;
                    }
                    middleIndex++;
                    middleStartIndex++;
                    c[++leftIndex]= data;
                }else{
                    printf("Stack Is Full");
                }
                
                break;
            case MIDDLE:
                if(checkCanInsertt(type)){
                    c[++middleIndex]= data;
                }else if(checkCanShiftMiddelStak(type)){
                    int index = middleStartIndex;
                    while( index <=middleIndex){
                        c[index-1] = c[index];
                        index++;
                    }
                    middleStartIndex--;
                    c[middleIndex]= data;
                }else{
                     printf("Stack Is Full");
                }
                break;
            default:
                break;
        }
    }
    
    
    bool charStakc::checkCanInsertt(type InsertType){
        bool result = false;
        
        switch (InsertType) {
            case RIGHT:
                if(rigthIndex-1>middleStartIndex && rigthIndex-1>middleIndex){
                    result = true;
                }
                break;
            case LEFT:
                if(leftIndex<middleStartIndex-1 ){
                    result = true;
                }
                break;
            case MIDDLE:
                if(middleIndex<rigthIndex-1 && middleIndex<rightIStartIndex){
                    result = true;
                }
                break;
            default:
                
                break;
        }
        
        return result ;
    }
    
    bool charStakc::checkCanShiftMiddelStak(type InsertType){
        bool result = false;
        switch (InsertType) {
            case RIGHT:
                if(middleStartIndex-1>leftIndex && middleStartIndex-1>leftStartIndex){
                    result = true;
                }
                break;
            case LEFT:
                if(middleIndex<rigthIndex-1 && middleIndex<rightIStartIndex){
                    result = true;
                }
                break;
            case MIDDLE:
                if(middleStartIndex-1 > leftIndex && middleStartIndex-1 > leftStartIndex){
                    result = true;
                }
                break;
            default:
                break;
        }
        return result;
    }
    

