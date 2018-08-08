#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include "Color.h"



class Geometria {
protected:
    float alto;
    float ancho;
public:
    Color color;
    float getAlto() const;
    void setAlto(float alto);
    float getAncho() const;
    void setAncho(float ancho);
    virtual float getsuperficie() = 0;
    virtual float getperimetro() = 0;
};


#endif //REPASO_GEOMETRIA_H
