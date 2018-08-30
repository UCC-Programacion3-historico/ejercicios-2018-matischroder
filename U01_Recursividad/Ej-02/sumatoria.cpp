#include "sumatoria.h"


int sumatoria(int arrPtr, unsigned int size) {
    if (size == 0)
        return *arrPtr;
    return *(arrPtr+size) + sumatoria (arr ,size - 1);
}