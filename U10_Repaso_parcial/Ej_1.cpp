/*
Hacer un método que reciba una lista y una pila, el método deberá modificar la lista
original, eliminando las posiciones indicadas por cada nodo de la pila.
Lista -> 2 ->4 ->6 ->8 ->9 ->3
Pila -> 2 5
Lista nueva-> 2 ->6 ->8 ->9
*/
#include "../U03_Pilas/Pila/Pila.h"
#include "../U02_Listas/Lista/Lista.h"

#include "Ej_1.h"
#include <iostream>
using namespace std;
void borrerenl(Pila<int> pi, Lista<int> & li){
    do{
        li.remover(pi.pop());
    }while (!pi.esVacia());
}
int main(){
    int n;
    cout<<"Cantidad de numeros en la lista: ";
    cin>>n;
    Lista<int> L1;
    Pila<int> P1;

    for (int i=0; i<n;i++){
        cin>>L1.insertarUltimo()
    }

    P1.push(3);
    P1.push(5);
    borrerenl(P1,L1);

    return (0);

}
