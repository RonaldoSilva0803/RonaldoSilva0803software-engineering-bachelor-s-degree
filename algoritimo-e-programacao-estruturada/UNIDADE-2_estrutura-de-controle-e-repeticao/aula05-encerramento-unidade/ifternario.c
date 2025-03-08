#include <stdio.h>

int main() {
    float salario;

    printf("Qual o Salario: ");

    scanf("%f", & salario );

    // Esse tracho do codigo sera alterado por um if ternario.

    /*if ( salario > 1000) 
        
        salario = salario * 1.05;

    else
            
        salario = salario * 1.07;*/

    salario = salario > 1000 ?
    salario * 1.05 : salario * 1.07;    
    
    printf("Nova Salario: %.2f\n", salario);    
    
}