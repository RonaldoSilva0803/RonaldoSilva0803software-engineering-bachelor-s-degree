//if aninhado
#include <stdio.h>

int maina() {
    int num = 10;

    if (num < 100) {
        printf("menor que 100");
    }

    else if (num < 1000) {
        printf("menor que 1000");
    }

    else if (num < 10000) {
        printf("menor que 10000");
    }

    else {
        printf("maior ou igual a 10000");
    }
    
    return 0; // End the program with a status code of 0 (no errors)
}