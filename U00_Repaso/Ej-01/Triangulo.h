#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


class Triangulo {
protected:
    float l1;
    float l2;
    float l3;
public:
    float getL1() const;

    void setL1(float l1);

    float getL2() const;

    void setL2(float l2);

    float getL3() const;

    void setL3(float l3);

    float getSuperficie();

    float getPerimetro();





};


#endif //REPASO_TRIANGULO_H
