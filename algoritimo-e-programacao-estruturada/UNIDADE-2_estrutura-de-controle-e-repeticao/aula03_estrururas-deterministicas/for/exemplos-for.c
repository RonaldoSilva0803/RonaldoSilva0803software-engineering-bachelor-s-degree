

/*int main() {

    for(int x = 10, y = 0; x >= 0, y <= 10; x--, y++){

        printf("x = %d, y = %d\n", x,y);

    }

    return 0;

}
*/

/*
Um outro exemplo interessante consiste no cálculo do fatorial de um número. Lembre-se 
que o fatorial de um número n consiste na
 multiplicação sucessiva n*(n-1)*(n-2)*...*1, por exemplo, 5! = 5*4*3*2*1 = 120.
*/

//estrutura condicional composta.

#include <stdlib.h>

int main() {

    int n;

    unsigned long long fatorial = 1; // Usamos "unsigned long long" para armazenar números grandes

    printf("Digite um numero inteiro positivo: ");

    scanf("%d", &n);

    // Verificação para números negativos

    if (n < 0) {

        printf("O fatorial nao esta definido para numeros negativos.\n");

    } else {

        for (int i = 1; i <= n; i++) {

            fatorial *= i;

        }

        printf("O fatorial de %d e %llu\n", n, fatorial);

    }

    return 0;

}