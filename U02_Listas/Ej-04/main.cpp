#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
using namespace std;

int main() {

    cout<< "Ejercicio 01/04\n" << std::endl;

    Lista<int> lis1;
    lis1.insertarUltimo(1);
    lis1.insertarUltimo(2);
    lis1.insertarUltimo(3);
    lis1.insertarUltimo(4);
    lis1.insertarUltimo(5);

    Lista<int> lis2;
    lis2.insertarUltimo(1);
    lis2.insertarUltimo(2);
    lis2.insertarUltimo(3);
    lis2.insertarUltimo(4);
    lis2.insertarUltimo(5);
    lis2.insertarUltimo(9);

    unir(lis1,lis2);

    cout<<lis1.getDato(1)<<endl;
    cout<<lis1.getDato(2)<<endl;
    cout<<lis1.getDato(3)<<endl;
    cout<<lis1.getDato(4)<<endl;
    cout<<lis1.getDato(5)<<endl;
    cout<<lis1.getDato(6)<<endl;
    cout<<lis1.getDato(7)<<endl;
    cout<<lis1.getDato(8)<<endl;
    cout<<lis1.getDato(9)<<endl;
    cout<<lis1.getDato(10)<<endl;
    cout<<lis1.getDato(11)<<endl;
    cout<<endl;



    return 0;
}