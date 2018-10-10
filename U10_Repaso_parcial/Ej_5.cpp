/*5. Hacer una función que dada una frase ingresada por teclado la imprima invertida.
Implementar la función con la estructura de datos vista más adecuada. (3p)
Por Ejemplo: “una imagen vale por mil palabras” debe convertirse en “palabras mil
por vale imagen una”. */
#include <iostream>
#include "Ej_5.h"
#include <string.h>
#include "../U03_Pilas/Pila/Pila.h"
using namespace std;

void invertir(string a){
    int c=0;
    Pila <char> A;
    for (int i=0; i<a.length(); i++){
        c++;
        if(a[i]==' '){
            for(int j=c-1; j>=1 ; j--){
                A.push(a[j]);
            }
            c=0;
            A.push(' ');
         }
    }
    do{
        cout<<A.pop();
    }while (!A.esVacia());
}

int main(){
    string a;
    cout<<"Inserte frase"<<endl;
    cin>>a;
    invertir(a);

    return (0);
}