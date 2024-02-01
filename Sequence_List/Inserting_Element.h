//
// Created by DELL on 2024/2/1.
//

#ifndef LINER_LIST_INSERTING_ELEMENT_H
#define LINER_LIST_INSERTING_ELEMENT_H

#endif //LINER_LIST_INSERTING_ELEMENT_H
#include "Create_SL.h"
#include <bits/stdc++.h>

using namespace std;
bool list_insert(SeqList &L,int i,int e){
    //Determine if the insertion position is valid
    if(i<1 || i>L.length+1) {
        cout<<"选择插入元素位置不合法,";
        return false;
    }

    //Determines whether the size of the list exceeds the maximum storage space limit
    if(L.length>=L.MaxSize) {
        cout<<"现有元素长度超出最大限制,";
        return false;
    }

    //In reverse order, the element from i+1 to n is shifted backward
    for(int j=L.length;j>=i;j--)
        L.data[j] = L.data[j-1];

    //insert new element
    L.data[i-1] = e;

    //the length plus one
    L.length++;

    //Returns a successful insertion message
    return true;
}
