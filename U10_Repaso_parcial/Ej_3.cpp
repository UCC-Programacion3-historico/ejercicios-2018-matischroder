//
// Created by Alumno on 03/10/2018.
/*3. Escribir una función recursiva que tenga un parámetro que sea entero positivo y
despliegue en la pantalla ese número de asteriscos: “*”, todos en una línea.*/

#include "Ej_3.h"
#include <iostream>
using namespace std;
    void ateriscos(int n){
        if (n==0)
            return;
        cout<<"*";
        ateriscos(n-1);
    };


int main(){
    int n;
    cout<<"Ingresar numero entero positivo"<<endl;
    do{
        cin>>n;
    }while (n<1);
    ateriscos(n);
    return 0;
}