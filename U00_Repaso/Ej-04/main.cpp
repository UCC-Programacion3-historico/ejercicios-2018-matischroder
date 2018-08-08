#include <iostream>

using namespace std;

int main() {
    cout << "Ejercicio 00/04\n" << endl;
    cout << "Ingrese tiempo en segundos" << endl;
    int n,h,m,s;
    cin>>n;
    h=n/3600;
    m=((n-h*3600)/60);
    s=n-(h*3600+m*60);
    cout<<n<<" segundos equivale a "<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}