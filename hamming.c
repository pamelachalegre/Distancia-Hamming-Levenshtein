#include <string.h>
#include <stdio.h>
#include "hamming.h"

int hamming(const char *a, const char *b) {
    int dist = 0;

    if (strlen(a) != strlen(b)) {
        printf("Não é possível comparar strings de tamanhos diferentes.\n");
        return -1;
    }

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] != b[i]) {
            dist++;
        }
    }
    return dist;
}