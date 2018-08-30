#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    auto *aux = lisA.inicio;
    while (aux.getNext()!= nullptr)
        aux=aux.getNext();
    aux.setNext(lisB.inicio);
}



#endif //UNION_H
