#include <iostream>
#include "../Cola/Cola.h"
#include "C:\Users\user\Desktop\facultad\programacion 3\git\ejercicios-2018-matischroder\U03_Pilas\Pila\Pila.h"
#include <string.h>
using namespace std;


bool palidromo(string a){
    ColaPrioridades<char> co;
    Pila<char> pi;
    for (int i=0; i<a.length();i++){
        co.encolar(a[i]);
        pi.push(a[i]);
    }
    for(int i = 0; i<a.length();i++){
        if(pi.pop()!=co.desencolar())
            return false;
        if(pi.esVacia())
            return true;
    }
}

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;
    string a;
    cin>>a;
    cout<<palidromo(a);
    return 0;
}