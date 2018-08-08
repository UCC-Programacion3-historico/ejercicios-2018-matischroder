#include "Circululo.h"
#include "Circulo.h"
#define PI=3.1415926

float Circulo::getRadio() const {
    return radio;
}

void Circulo::setRadio(float radio) {
    Circulo::radio = radio;
}

float Circulo::getperimetro() {
    return 2*PI*radio;
}

float Ciruclo::getSuperficie(float PI) {
    return PI * radio * radio;
}


