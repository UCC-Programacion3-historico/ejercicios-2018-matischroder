/*
 * Escriba una función void recursiva que reciba como parámetro solo un entero positivo
 * n y que despliegue todos los enteros impares menores a n.
 */

#include "Ej_2.h"
#include <iostream>

using namespace std;

void impares (int n){
    if ((n%2) == 0 )
        n--;
    cout<<n<<endl;
    if (n==1)
        return;
    impares(n-2);
}

using namespace std;
int main(){
    int n;
    cout<<"Ingresar numero entero positivo"<<endl;
    do{
        cin>>n;
    }while(n<1);
    impares(n);
    return 0;
}