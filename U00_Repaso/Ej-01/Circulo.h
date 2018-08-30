#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H

#include "Geometria.h"

class Circulo : public Geometria {
protected:
    float radio;
public:
    float getRadio() const;

    void setRadio(float radio);

    float getSuperficie();

    float getPerimetro();
};


#endif //REPASO_CIRCULO_H
