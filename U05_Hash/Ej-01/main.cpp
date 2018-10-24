#include <iostream>
#include "../HashMap/HashMap.h"
using namespace std;
unsigned int fun(int c){
    return c * c;
}
int main() {
    HashMap<int,char>hm(23,fun);
    hm.put(234154,'a');
    hm.put(234184,'b');

    hm.put(239874,'c');

    hm.put(292034,'d');

    cout<<hm.get(39874)<<endl;


    std::cout << "Ejercicio 05/01\n" << std::endl;
    return 0;
}