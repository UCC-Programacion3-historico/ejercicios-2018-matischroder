//
// Created by alumno on 29/08/18.
//

#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template <class T>
class nodo {
private:
    T dato;
    nodo *next;
public:
    nodo(T d){
        dato=d;
        next= nullptr;
    }
    nodo(T d,nodo *n){
        dato = d;
        nodo = n;
    }
    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        nodo::dato = dato;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }
};


#endif //PROGRAMACION3_NODO_H
