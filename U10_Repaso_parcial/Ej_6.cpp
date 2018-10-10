//Escribir una funcion recursiva int vocales (char *cd) para calcular el numero de vocales de una cadena.
//recordad que una cadena de caracteres finaliza con un NULL
// Created by user on 9/10/2018.
//

#include "Ej_6.h"
#include <iostream>
using namespace std;

int vocales (char* cd){
    if (*cd=='\0'){
        return 0;
    }
    if (*cd=='a'||*cd=='e'||*cd=='i'||*cd=='o'||*cd=='u'){
        return (1 + vocales(cd+1));
    }
    else
        vocales(cd+1);
}
int main(){
    char* cad = new char [50];
    cout<<"introducir cadena de caracteres"<<endl;
    cin>>cad;
    cout<<vocales(cad) ;
    return 0;
}


