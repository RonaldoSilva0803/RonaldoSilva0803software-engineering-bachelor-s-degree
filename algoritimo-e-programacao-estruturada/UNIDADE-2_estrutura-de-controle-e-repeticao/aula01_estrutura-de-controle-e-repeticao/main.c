#include <stdio.h>

int main() {
    float idade;
    printf("Digite sua idade: \n");
    scanf("%f", &idade);

    if (idade >= 18)
    {
        printf("Você já pode tirar sua carteira de habilitação, você é maior de 18");
    }

    return 0; // End the program with a status code of 0 (no errors)
}


