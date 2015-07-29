//
//  ExerciseLinkNode.cpp
//  hanoi
//
//  Created by unbong on 15/7/22.
//  Copyright (c) 2015年 unbong. All rights reserved.
//



#include "Linkedtable.h"
#include "ExerciseLinkNode.h"

//这个方法 有问题 检查时否为循环链表
bool isEndednull(struct ListNODE **head){
    
    struct ListNODE *current , *temp;
    int count = 1;
    bool result = false;
    
    if(head == NULL){
        printf ("It is empty");
        return false;
    }
    current = *head;
    temp = * head;
    while(true){
    
        temp = current->next;
        while(true){
            if(temp==NULL ){
                printf("It is ended NULL");
                result = false;
                break;
            }
            
            if(current ==temp->next){
                printf("It is xunhua lianbiao");
                result = true;
                count++;
                break;
                
            }
            temp = temp->next;
            
        }
        
        if(temp == NULL && count==1){
            break;
        }
        
        if (count == 2) {
            break;
        }
        current = current->next;
    }
    return result;
    
    
}


//p69 问题3-17


void getSharePoint(struct ListNODE **headN, struct ListNODE **headM ){
    struct ListNODE *Ncurrent , *Mcurrent, *Ntemp , *Mtemp;
    
    int Ncount = 0;
    int Mcount = 0;
    
    if(headN == NULL  || headM == NULL ){
        printf("Don't have share potint");
        return;
    }
    Ncurrent = * headN;
    Mcurrent = *headM;
    while(Ncurrent ->next == NULL && Mcurrent->next == NULL ){
        if(Ncurrent ->next != NULL){
            Ncount++;
        }
        if(Mcurrent->next!= NULL ){
            Mcount++;
        }
        Ncurrent = Ncurrent->next;
        Mcurrent = Mcurrent->next;
    }
    
    Ntemp = *headN;
    Mtemp = *headM;
    
    if(Ncount > Mcount){
        while((*headN)->next != NULL ){
            int tmp = 0;
            int continueCount = Ncount-Mcount;
            if(tmp < continueCount){
                tmp++;
                Ntemp = Ntemp->next;
                continue;
            }
            if(Ntemp->next == Mtemp->next){
                
                break;
            }
            
            Ntemp = Ntemp->next;
            Mtemp = Mtemp->next;
        }
        
    }else if(Mcount == Ncount){
        while((*headN)->next != NULL ){
            if(Ntemp->next == Mtemp->next){
                break;
            }
        }
        
        Ntemp = Ntemp->next;
        Mtemp = Mtemp->next;
    }else{
        while((*headN)->next != NULL ){
            int tmp = 0;
            int continueCount = Mcount-Ncount;
            if(tmp < continueCount){
                tmp++;
                Mtemp = Mtemp->next;
                continue;
            }
            if(Ntemp->next == Mtemp->next){
                break;
            }
        
        Ntemp = Ntemp->next;
        Mtemp = Mtemp->next;

        }
    }
    
    
    
}



