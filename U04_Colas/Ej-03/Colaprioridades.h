#ifndef COLA_H
#define COLA_H

#define CANTP 10
/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */

#include "nodo.h"


template<class T>
class ColaPrioridades {
private:
    nodo<T> *entrada[CANTP];
    nodo<T> *salida;

public:

    ColaPrioridades();

    ~ColaPrioridades();

    void encolar(T dato,int p);

    T desencolar();

    bool esVacia();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
ColaPrioridades<T>::ColaPrioridades() {
    for (int i = 0; i<CANTP;i++)
        entrada[i]= nullptr;

    salida = nullptr;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
ColaPrioridades<T>::~ColaPrioridades() {}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void ColaPrioridades<T>::encolar(T dato,int p) {
    auto *nuevo = new nodo<T>(dato, p);

    //Día soleado

    if (entrada[p] != nullptr){
        nuevo->setNext(entrada[p]->getNext());
        entrada[p]->getNext(nuevo);
    }
    else{
        nuevo->setNext(salida);
        salida = nuevo;
    }

    //Muevo todos los elementos de prioridades superiores que hayan estado en el mismo lugar
    for (int i = p+1;i<CANTP;i++){
        if (entrada[p]==entrada[i])
            entrada[i]=nuevo;

    }
    entrada[p] = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T ColaPrioridades<T>::desencolar() {
    if (salida == nullptr)
        throw 1;
    T dato = salida->getDato();
    nodo<T> *salida_anterior = salida;
    salida = salida->getNext();

    for (int i = 0; i<CANTP;i++){
        if (salida_anterior == entrada[i])
            entrada[i] = nullptr;
    }


    delete salida_anterior;
    return dato;

}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool ColaPrioridades<T>::esVacia() {
    return salida == nullptr;

    /*if (salida== nullptr){
        return true;             Same
        else
        return false;
    }*/
}

#endif //LISTA_H