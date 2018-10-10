//Funcion que reciba por referencia una cola e invierta
//todo su contenido
// Created by user on 9/10/2018.
//

#include "Ej_8.h"
#include <math.h>
#include "C:\Users\user\Desktop\facultad\programacion 3\git\ejercicios-2018-matischroder\U04_Colas\Cola\Cola.h"
#include "C:\Users\user\Desktop\facultad\programacion 3\git\ejercicios-2018-matischroder\U03_Pilas\Pila\Pila.h"

void invertir (ColaPrioridades<int> & co){
    Pila<int> pi;
    do{
        pi.push(co.desencolar());
    }while (!co.esVacia());
    do{
        co.encolar(pi.pop());
    }while(!pi.esVacia());
}

int main (){
    ColaPrioridades<int> cola;
    cola.encolar(1);
    cola.encolar(5);
    cola.encolar(6);
    cola.encolar(7);
    invertir(cola);
    for (int i = 0; i<4;i++){
        cola.desencolar();
    }
}