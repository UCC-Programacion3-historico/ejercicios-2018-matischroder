#include <iostream>
#include "../Pila/Pila.h"

template <class T>

/*bool*/void igualdad(Pila <T> pA,Pila <T> pB){
    if(pA.peek()==pB.peek()){
        if(pA.esVacia()&&pB.esVacia())
            std::cout<<"Son iguales"<<std::endl;
            /*return true;*/
        else
            igualdad(pA.pop(),pB.pop());
    }
    else
        /*return false;*/
        std::cout<<"No son iguales"<<std::endl;
}

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    Pila<int> A;
    Pila<int> B;
    A.push(1);
    A.push(2);
    B.push(1);
    B.push(2);
    igualdad(A,B);
    return 0;
}