#include <stdlib.h>

void fill(int *vector, int size, int value) {

    int i;

    for (i = 0; i < size; i++) {
        vector[i] = value;
    }

}

int find(int *vector, int size, int value) {

    int i;
    int r = 0;

    for (i = 0; i < size; i++) {
        if (vector[i] == value) {
            r++;
        }
    }

    return r;
}
