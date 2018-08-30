#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
using namespace std;

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    Lista <int>l1; //Primer lista
    int t1;
    cout<<"Ingrese cantidad de elmentos de la lista 1"<<endl;
    cin>>t1;
    for (int i=0;i<t1;i++){
        int n;
        cout<<"Ingrese entero"<<endl;
        cin>>n;
        l1.insertar(i,n);
    }

    Lista <int>l2; //segunda lista
    int t2;
    cout<<"Ingrese cantidad de elmentos de la lista 2"<<endl;
    cin>>t2;
    for (int i=0;i<t2;i++){
        int n;
        cout<<"Ingrese entero"<<endl;
        cin>>n;
        l1.insertar(i,n);
    }

    unir(l1,l2);
    cout<<"Corroboracion de clase lista"<<endl;//corroboracion si se anninaron las listas
    int t3=t1+t2;
    for (int i = 0;i<t3;i++){
        cout<<l1.getDato(i)<<endl;
    }
    cout<<"Tamaño de lista= "<<l1.getTamanio()<<endl;

    return 0;
}