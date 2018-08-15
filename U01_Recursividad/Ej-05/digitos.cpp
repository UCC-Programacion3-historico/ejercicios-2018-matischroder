#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if(b>a)
        return 0;
    return  cociente(a-b,b)+1;
}

unsigned int resto(unsigned int a, unsigned int b) {
    if (b>a)
        return a;
    return resto(a-b,b);
}

void escribir_espaciado(unsigned int num) {
    int r;
    r = resto(num,10);
    if (cociente(num,10)==0){
        cout<<num%10<<"\t";
    }
    else{
        escribir_espaciado(num/10);
        cout<<r<<"\t";
    }


}
