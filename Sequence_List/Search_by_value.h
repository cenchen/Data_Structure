//
// Created by DELL on 2024/2/1.
//

#ifndef LINER_LIST_SEARCH_BY_VALUE_H
#define LINER_LIST_SEARCH_BY_VALUE_H

#endif //LINER_LIST_SEARCH_BY_VALUE_H

#include "Create_SL.h"
#include <bits/stdc++.h>

using namespace std;

bool LocateElem(SeqList L, int e, int &i){
    for(int j=0;j<=L.length-1;++j)
        if(e == L.data[j]){
            i = j+1;
            return true;
        }
    return false;
}