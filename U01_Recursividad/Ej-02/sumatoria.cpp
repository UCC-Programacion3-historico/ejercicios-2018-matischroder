#include "sumatoria.h"


int sumatoria(int arr, unsigned int size) {
    if (size == 0)
        return arr[size];
    return arr[size] + sumatoria (arr ,size - 1);
}