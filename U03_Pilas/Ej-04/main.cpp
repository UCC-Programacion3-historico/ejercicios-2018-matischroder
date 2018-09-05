#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;

char inverso(char p) {
    if (p == '}')
        return '{';
    if (p == ']')
        return '[';
    if (p == ')')
        return '(';
}

int main() {
    std::cout << "Ejercicio 03/04\n" << std::endl;

    string ecuacion = "{3+5[5-7]*4/(3+4))";
    Pila<char> elefra;
    for (int i=0; i < ecuacion.length();i++){

        if (ecuacion[i] == '{')//llaves
            elefra.push(ecuacion[i]);
        if (ecuacion[i]== '}'){
            if (elefra.peek() == inverso(ecuacion[i]))
                elefra.pop();
            else
                throw "La ecuacion esta mal escrita";
        }

        if (ecuacion[i]== '[')//corchetes
            elefra.push(ecuacion[i]);
        if (ecuacion[i]== ']'){
            if (elefra.peek() == inverso(ecuacion[i]))
                elefra.pop();
            else
                throw "La ecuacion esta mal escrita";
        }

        if (ecuacion[i]== '(')//parentesis
            elefra.push(ecuacion[i]);
        if (ecuacion[i]== ')'){
            if (elefra.peek() == inverso(ecuacion[i]))
                elefra.pop();
            else
                throw "La ecuacion esta mal escrita";
        }
    }
    if(elefra.esVacia())
        cout<<"La ecuacion esta bien escrita"<<endl;
    else
        cout<<"La ecuacion esta mal escrita";
    return 0;
}