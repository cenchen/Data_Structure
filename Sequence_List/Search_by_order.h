//
// Created by DELL on 2024/2/1.
//

#ifndef LINER_LIST_SEARCH_BY_ORDER_H
#define LINER_LIST_SEARCH_BY_ORDER_H

#endif //LINER_LIST_SEARCH_BY_ORDER_H

#include <bits/stdc++.h>
#include "Create_SL.h"

using namespace std;

bool ValueElem(SeqList L, int i, int &e){
    if(i<1 || i>L.length+1){
        cout<<"选择插入元素位置不合法,";
        return false;
    }
    e = L.data[i-1];
    return true;
}