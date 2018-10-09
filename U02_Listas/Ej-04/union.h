#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


void unir(Lista<int> &lisA, Lista<int> &lisB) {
    for (int i=0;i<lisB.getTamanio();i++){
        lisA.insertarUltimo(lisB.getDato(i+1));
    }
}



#endif //UNION_H
