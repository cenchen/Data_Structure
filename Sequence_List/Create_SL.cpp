//
// Created by DELL on 2024/2/1.
//
#include <bits/stdc++.h>
#include "Create_SL.h"
#include "Inserting_Element.h"
#include "Delet_Element.h"
#include "Search_by_value.h"
#include "Search_by_order.h"

using namespace std;

int main(){

    //initilize sequence list
    //list length=1001 2 3 4 5
    SeqList L;
    if(init(L,100))
        cout<<"Init Successfully!"<<endl<<endl;

    //为了后续正常操作，输入一些初始值
    cout<<"请输入五个放入顺序表中的初始值"<<endl;
    L.length = 5;
    for(int i=0;i<5;++i)
        cin>>L.data[i];

    //在指定位置插入新元素
    cout<<"请输入要插入的元素"<<endl;
    int InsertElement;
    cin>>InsertElement;
    cout<<"请输入想要插入的元素位置"<<endl;
    int position;
    cin>>position;
    if(list_insert(L,position,InsertElement)){
        cout<<"元素插入成功"<<endl;
        cout<<"现在的列表为"<<":";
        for(int i=0;i<L.length;++i)
            cout<<L.data[i]<<' ';
        cout<<endl;
    }
    else
        cout<<"插入失败"<<endl;

    //删除指定位置的元素
    cout<<"请输入想要删除的元素位置"<<endl;
    cin>>position;
    int deletedElement = 1;
    if(ListDelete(L, position, deletedElement)){
        cout<<"元素删除成功"<<endl<<"被删除的元素为:"<<deletedElement<<endl;
        cout<<"现在的列表为"<<":";
        for(int i=0;i<L.length;++i)
            cout<<L.data[i]<<' ';
        cout<<endl;
    }
    else
        cout<<"删除失败"<<endl;

    //查找与指定值相同的元素位置
    cout<<"请输入想查找的值"<<endl;
    int searchValue;
    cin>>searchValue;
    if (LocateElem(L, searchValue, position)){
        cout<<"查找成功，元素位置为:"<<position<<endl;
    }
    else
        cout<<"查找失败"<<endl;

    //查找指定位置元素的值
    cout<<"请输入想查找的位置"<<endl;
    cin>>position;
    if (ValueElem(L, position, searchValue)){
        cout<<"查找成功，该元素值为:"<<searchValue<<endl;
    }
    else
        cout<<"查找失败"<<endl;

    return 0;
}