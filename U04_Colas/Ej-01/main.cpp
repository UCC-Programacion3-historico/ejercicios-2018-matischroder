#include <iostream>
#include "../Cola/Cola.h"
using namespace std;

bool igualdad(Cola <int> &cA,Cola <int> &cB){
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
    Cola<int> a;
    Cola<int> b;
    for (int i=0;i<10;i++){
        a.encolar(i);
        b.encolar(i);
    }
    cout<<igualdad(a,b);
    return 0;
}