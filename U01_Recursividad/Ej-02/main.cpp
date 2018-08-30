#include <iostream>
#include "sumatoria.h"

using namespace std;

int main() {
    int arr;
    int *arrPtr=&arr;
    int size;

    std::cout << "Ejercicio 01/02\n" << std::endl;
    std::cout<<"ingrese cantidad de numeros a sumar"<<endl;
    cin>>size;
    arrPtr= new int(size);
    for(int i=0; i<size;i++){
        cout<<"ingrese numero "<<i+1<<" ";
        cin>>*(arrPtr+i);
    }
    cout << "sumatoria= "<<sumatoria(arrPtr,size)<<endl;
    arr = delete int (size);
    return 0;
}