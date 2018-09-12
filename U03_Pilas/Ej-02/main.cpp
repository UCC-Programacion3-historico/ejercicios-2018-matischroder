#include <iostream>
#include "../Pila/Pila.h"


bool igualdad(Pila <int> &pA,Pila <int> &pB){
    if(pA.esVacia()&&pB.esVacia())
        return true;
    try {
        if(pA.pop()==pB.pop())
            return igualdad(pA,pB);
        else
            return false;
    }catch(int e){
        return false;
    }
}

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    Pila<int> A;
    Pila<int> B;
    A.push(1);
    A.push(2);
    A.push(3);
    B.push(1);
    B.push(2);
    std::cout<<igualdad(A,B);
    return 0;
}