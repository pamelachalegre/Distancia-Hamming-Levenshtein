#include <string.h>
#include <stdio.h>
#include "hamming.h"

int hamming(const char *a, const char *b) {
    int dist = 0;
    size_t len_a = strlen(a);
    size_t len_b = strlen(b);

    if (len_a != len_b) {
        printf("Não é possível comparar strings de tamanhos diferentes.\n");
        return -1; 
    }

    for (int i = 0; i < len_a; i++) {
        if (a[i] != b[i]) {
            dist++;
        }
    }
    return dist;
}