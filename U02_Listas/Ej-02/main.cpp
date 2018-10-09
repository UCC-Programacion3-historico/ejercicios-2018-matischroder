#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    Lista <int>l1;
    int t;
    cout<<"Ingrese cantidad de elmentos de la lista"<<endl;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cout<<"Ingrese entero " <<i+1<<endl;
        cin>>n;
        l1.insertar(i,n);
    } //el ejercicio termina aca
    cout<<endl;
    cout<<"Corroboracion de clase lista"<<endl;
    l1.insertar(3,9);
    for (int i = 0;i<t;i++){
        cout<<l1.getDato(i)<<endl;
    }
    cout<<"Tamaño de lista= "<<l1.getTamanio()<<endl;
    return 0;
}