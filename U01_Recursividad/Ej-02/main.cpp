#include <iostream>
#include "sumatoria.h"
#include <stdlib.h>

using namespace std;

int sumatoria(int* arr, int size) {
    if (size == 0){
        return arr[0];
    }
    return arr[size]=*(arr+size) + sumatoria(arr, size-1);
}

int main() {
    int* arr;
    int size;

    std::cout << "Ejercicio 01/02\n" << std::endl;
    std::cout<<"ingrese cantidad de numeros a sumar"<<endl;
    cin>>size;
    arr = new int(size);
    for(int i=0; i<size;i++){
        cout<<"ingrese numero "<<i+1<<" ";
        cin>>arr[i];
    }
    size--;
    cout << "sumatoria= "<<sumatoria(arr,size)<<endl;
    return 0;
}