//
// Created by user on 9/10/2018.
//
#include <iostream>
#include "Ej_9.h"
using namespace std;
long decbin (int num){
    if(num/2==1){
        return (10+num%2);
    }
     return (num%2+(10*decbin(num/2)));
}
int main(){
    int c=11;
    cout<<decbin(c);
    return 0;
}