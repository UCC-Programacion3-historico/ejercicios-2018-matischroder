#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
    Lista <int>l1;
    int t;
    cout<<"Ingrese cantidad de elmentos de la lista"<<endl;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cout<<"Ingrese entero"<<endl;
        cin>>n;
        l1.insertar(i,n);
    } //crearcion de lista para luego borrar elemento
    cout<<"Ingrese posicion a borrar"<<endl;
    int n;
    cin>>n;
    l1.remover(n);//ej borrar
    cout<<"Corroboracion"<<endl;
    for (int i = 0;i<t;i++){//corroboracion si se borro el elemento
        cout<<l1.getDato(i)<<endl;
    }
    return 0;
}