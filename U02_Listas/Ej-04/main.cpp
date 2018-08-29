#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
using namespace std;

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;
    Lista <int>l1;
    int t1;
    cout<<"Ingrese cantidad de elmentos de la lista 1"<<endl;
    cin>>t1;
    for (int i=0;i<t1;i++){
        int n;
        cout<<"Ingrese entero"<<endl;
        cin>>n;
        l1.insertar(i,n);
    }
    Lista <int>l2;
    int t2;
    cout<<"Ingrese cantidad de elmentos de la lista 2"<<endl;
    cin>>t2;
    for (int i=0;i<t2;i++){
        int n;
        cout<<"Ingrese entero"<<endl;
        cin>>n;
        l1.insertar(i,n);
    } //creacion de dos listas distintas
    Lista l3;
    l3.unir;
    return 0;
}