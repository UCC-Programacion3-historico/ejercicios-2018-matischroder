#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;
/*
Pila ponerenpila(char a){
    if (*a->nullptr)
    return Pila;
    Pila a
}
*/

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;

    Pila<char> b;
    char* a;

    cout<<"Escribir palabra"<<endl;
    cin>>a;
    for(int i=0; i < strlen(a) ;i++){
        b.push(a[i]);
    }
    for(int i=0; i < strlen(a) ;i++){
        cout<<b.pop();
    }
    return 0;
}