//
// Created by DELL on 2024/2/1.
//

#ifndef LINER_LIST_CREATE_SL_H
#define LINER_LIST_CREATE_SL_H

//define sequence list data type;
typedef struct{
    int *data;
    int MaxSize,length;
}SeqList;


//Initialize the sequence list and allocate the initial dynamic storage
bool init(SeqList &L,int maxsize){
    L.data = new int[maxsize];
    L.MaxSize = maxsize;
    L.length = 0;
    return true;
}


#endif //LINER_LIST_CREATE_SL_H
