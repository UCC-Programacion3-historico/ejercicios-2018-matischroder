#include <iostream>
#include "sumatoria.h"

using namespace std;

int main() {
    int *arr;
    int size;

    std::cout << "Ejercicio 01/02\n" << std::endl;
    cout<<"ingrese cantidad de numeros a sumar"<<endl;
    cin>>size;
    arr= new int(size);
    for(int i=0; i<size;i++){
        cout<<"ingrese numero"<<i<<" ";
        cin>>arr[i];
    }
    cout << "sumatoria= "<<sumatoria(arr,size)<<endl;

    return 0;
}