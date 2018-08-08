#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> micalc;
    Calculadora<double> micalcdoubble;
    cout << "Ejercicio 00/02\n" << endl;
    cout<<micalc.suma(2,3)<<endl;
    cout<<micalc.resta(2,3)<<endl;
    try{
        cout<<micalc.division(2,0)<<endl;
    }catch(int e){
        cout<<"error: "<<e<<endl;
    }
    cout<<micalc.multiplicacion(2,3)<<endl;
    cout<<micalcdoubble.suma(2,5)<<endl;
    cout<<micalcdoubble.resta(2,5)<<endl;
    try{
        cout<<micalcdoubble.division(5,2)<<endl;
    }catch(int e){
        cout<<"error: "<<e<<endl;
    }
    cout<<micalcdoubble.multiplicacion(2,5)<<endl;
    return 0;
}