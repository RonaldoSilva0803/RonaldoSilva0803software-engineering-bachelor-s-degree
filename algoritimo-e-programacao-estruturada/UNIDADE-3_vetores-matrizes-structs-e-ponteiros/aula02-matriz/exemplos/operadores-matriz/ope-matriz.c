#include <stdio.h>

int main(){

int matriz[3][3];

int i, j, sDiagPrinc = 0, sDiagSec = 0;

// Leitura da matriz

  printf("Digite os elementos da matriz 3x3:\n");

for (i = 0; i < 3; i++) {

    for (j = 0; j < 3; j++) {

        scanf("%f", &matriz[i][j]);

    }

}

// Cálculo da soma da diagonal principal e secundária

    for (i = 0, j = 2; i < 3, j >=0; i++, j--) {

        sDiagPrinc += matriz[i][i];

        sDiagSec += matriz[i][j];

    }

printf("Soma dos elementos da diagonal principal: %d\n", sDiagPrinc);

printf("Soma dos elementos da diagonal secundaria: %d\n", sDiagSec);

return 0;

}