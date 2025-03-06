/*
   Faça um programa em C que calcula a idade média de um  grupo de pessoas.
  A finalização de entrada de numeros é dada por um 0.
   o programa não deve aceitar idades negativas. 
 */

#include <stdio.h>

int main() {
    int idade, soma = 0, contPessoas = 0;

    while (1){
       
        printf("Digite a idade (0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0){
            break; // encerra o laço
    }

    if (idade < 0) {
        printf("Nao existe idade negativa! Tente novamente...\n");
        continue;
    }

    soma += idade;
    contPessoas++;

    }

    if (contPessoas > 0 ) {
        float media = (float) soma / contPessoas; //cast.
        printf("Media das idades: %.2f/n", media);
    } else {
        printf("Nenhuma idade foi fornecida.\n");
    }

    return 0;
}