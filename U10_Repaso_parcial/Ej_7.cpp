//
// Created by user on 9/10/2018.
//
#include "../U10_Repaso_parcial/Ej_7.h"
#include "Ej_7.h"
#include <iostream>
using namespace std;

int main(){
        Lista<int> l1;
        l1.insertarUltimo(3);
        l1.insertarUltimo(4);
        l1.insertarUltimo(7);
        l1.insertarUltimo(5);
        for(int i=0;i<4;i++){
            cout<<l1.getDato(i)<<"->";
        }
        cout<<endl;

        l1.moverPrimero(3);

        for(int i=0;i<4;i++){
           cout<<l1.getDato(i)<<"->";
        }
        return 0;
}