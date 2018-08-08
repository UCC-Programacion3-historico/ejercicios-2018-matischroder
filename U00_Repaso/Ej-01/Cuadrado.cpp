#include "Cuadrado.h"

float Cuadrado::getLado() const {
    return lado;
}

void Cuadrado::setLado(float lado) {
    Cuadrado::lado = lado;
}

float Cuadrado::getPerimetro() {
    return lado*4;
}

float Cuadrado::getSuperficie() {
    return lado*lado;
}

float Cuadrado::getDiagonal() {
    return sqrt(lado*lado+lado*lado)
}