//
// Created by DELL on 2024/2/1.
//

#ifndef LINER_LIST_DELET_ELEMENT_H
#define LINER_LIST_DELET_ELEMENT_H

#endif //LINER_LIST_DELET_ELEMENT_H

#include <bits/stdc++.h>
#include "Create_SL.h"

using namespace std;

bool ListDelete(SeqList &L, int i, int &e){
    //Determine if the insertion position is valid
    if(i<1 || i>L.length+1){
        cout<<"选择插入元素位置不合法,";
        return false;
    }
    //save the element which has been deleted to e
    e = L.data[i-1];
    //delete element position =i
    for(int j=i;j<L.length;++j)
        L.data[j-1] = L.data[j];
    L.length--;
    return true;
}
