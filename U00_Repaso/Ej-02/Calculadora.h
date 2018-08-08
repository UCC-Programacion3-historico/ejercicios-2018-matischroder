#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

#include <iostream>
using namespace std;

template <class T>
class Calculadora {
public:
    T suma(T a,T b){
        return a+b;
    }
    T resta(T a,T b){
        return a-b;
    }
    T multiplicacion(T a,T b){
        return a*b;
    }
    T division(T a,T b){
        T tmp;
        if(b==0)
            throw 404;
        return a/b;
        }
};



#endif //REPASO_CALCULADORA_H
