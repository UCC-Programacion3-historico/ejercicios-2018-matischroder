#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;
int main() {
    std::cout << "Ejercicio 03/05\n" << std::endl;
    string infija "(6+2)∗5−8/4";
    string postfija;
    Pila transf;
    for (int i=0; i<infija.length();i++){
        if (infija[i]=='+'||infija[i]=='-'){
            transf.push(infija[i])
            postfija
        }
    }
    return 0;
}