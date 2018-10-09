#include "../Lista/Lista.h"
#include <iostream>

using namespace std;

/*Implementar la función fnInvierte(lista). Esta función invertirá el orden original de los
elementos en la lista, de tal forma que el último elemento será ahora el primero, el penúltimo
será el segundo, y así hasta que el primero sea el último. Considere que la lista no está
vacía y que no se construirá una nueva, sólo se invertirá el orden de los elementos de la
lista original.*/
void finviertir(Lista <int> &li){
        for(int i=0; i<li.getTamanio()/2;i++){
                int j=li.getTamanio()-i;
                int aux=li.getDato(i+1);
                li.reemplazar(i+1,li.getDato(j));
                li.reemplazar(j,aux);
        }
}
#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;
int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;
    Lista<int> lis;
    lis.insertarUltimo(1);
    lis.insertarUltimo(2);
    lis.insertarUltimo(3);
    lis.insertarUltimo(4);
    lis.insertarUltimo(5);
    cout<<lis.getDato(1)<<endl;
    cout<<lis.getDato(2)<<endl;
    cout<<lis.getDato(3)<<endl;
    cout<<lis.getDato(4)<<endl;
    cout<<lis.getDato(5)<<endl;
    cout<<endl;
    finviertir(lis);
    cout<<lis.getDato(1)<<endl;
    cout<<lis.getDato(2)<<endl;
    cout<<lis.getDato(3)<<endl;
    cout<<lis.getDato(4)<<endl;
    cout<<lis.getDato(5)<<endl;
    return 0;
}