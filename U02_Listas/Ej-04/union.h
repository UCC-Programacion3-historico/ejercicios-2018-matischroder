#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template <class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    auto *aux = lisA.getInicio();
    while (aux->getNext()!= nullptr)
        aux=aux->getNext();
    aux->getNext(lisB.getInicio());
}



#endif //UNION_H
