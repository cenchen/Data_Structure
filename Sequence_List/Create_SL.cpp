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

    //Ϊ�˺�����������������һЩ��ʼֵ
    cout<<"�������������˳����еĳ�ʼֵ"<<endl;
    L.length = 5;
    for(int i=0;i<5;++i)
        cin>>L.data[i];

    //��ָ��λ�ò�����Ԫ��
    cout<<"������Ҫ�����Ԫ��"<<endl;
    int InsertElement;
    cin>>InsertElement;
    cout<<"��������Ҫ�����Ԫ��λ��"<<endl;
    int position;
    cin>>position;
    if(list_insert(L,position,InsertElement)){
        cout<<"Ԫ�ز���ɹ�"<<endl;
        cout<<"���ڵ��б�Ϊ"<<":";
        for(int i=0;i<L.length;++i)
            cout<<L.data[i]<<' ';
        cout<<endl;
    }
    else
        cout<<"����ʧ��"<<endl;

    //ɾ��ָ��λ�õ�Ԫ��
    cout<<"��������Ҫɾ����Ԫ��λ��"<<endl;
    cin>>position;
    int deletedElement = 1;
    if(ListDelete(L, position, deletedElement)){
        cout<<"Ԫ��ɾ���ɹ�"<<endl<<"��ɾ����Ԫ��Ϊ:"<<deletedElement<<endl;
        cout<<"���ڵ��б�Ϊ"<<":";
        for(int i=0;i<L.length;++i)
            cout<<L.data[i]<<' ';
        cout<<endl;
    }
    else
        cout<<"ɾ��ʧ��"<<endl;

    //������ָ��ֵ��ͬ��Ԫ��λ��
    cout<<"����������ҵ�ֵ"<<endl;
    int searchValue;
    cin>>searchValue;
    if (LocateElem(L, searchValue, position)){
        cout<<"���ҳɹ���Ԫ��λ��Ϊ:"<<position<<endl;
    }
    else
        cout<<"����ʧ��"<<endl;

    //����ָ��λ��Ԫ�ص�ֵ
    cout<<"����������ҵ�λ��"<<endl;
    cin>>position;
    if (ValueElem(L, position, searchValue)){
        cout<<"���ҳɹ�����Ԫ��ֵΪ:"<<searchValue<<endl;
    }
    else
        cout<<"����ʧ��"<<endl;

    return 0;
}