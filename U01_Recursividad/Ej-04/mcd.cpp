/*##    Ejercicio N°4.
Algoritmo de Euclides: mostrar que el máximo común divisor
        (mcd) de a y b, (a > b > 0), es igual a a si b es cero, en
otro caso es igual al mcd de b y el remanente de a dividido
por b, si b > 0.*/
#include "mcd.h"

unsigned int mcd(unsigned int a, unsigned int b) {
    if (b == 0)
        return a;
    return mcd(b,a%b);
}