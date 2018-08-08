#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H


class Cuadrado {
protected:
    float lado;
public:
    float getLado() const;

    void setLado(float lado);

    float getPerimetro();

    float getSuperficie();

    float getDiagonal();


};


#endif //REPASO_CUADRADO_H
