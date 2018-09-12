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
    int prioridad;
public:
    nodo(T d,int p){
        dato=d;
        next= nullptr;
        prioridad=p;
    }
    nodo(T d,nodo *n,int p){
        dato = d;
        next = n;
        prioridad = p;
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
