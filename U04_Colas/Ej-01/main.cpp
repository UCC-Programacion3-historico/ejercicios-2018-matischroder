#include <iostream>
#include "../Cola/Cola.h"
using namespace std;

bool igualdad(ColaPrioridades<char> &cA,ColaPrioridades<char> &cB){
    if(cA.esVacia()&&cB.esVacia())
        return true;
    try {
        if(cA.desencolar()==cB.desencolar())
            return igualdad(cA,cB);
        else
            return false;
    }catch(int e){
        return false;
    }
}

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;
    ColaPrioridades<char> a;
    ColaPrioridades<char> b;
    for (int i=0;i<10;i++){
        a.encolar('g');
        b.encolar('g');
    }
    if (igualdad(a,b)==1)
        cout<<"Son iguales"<<endl;
    else
        cout<<"Son distintas"<<endl;
    return 0;
}