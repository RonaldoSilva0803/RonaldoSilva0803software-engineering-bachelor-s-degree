# Conjectura de Collatz

Um outro exemplo interessante consiste no problema que envolve a aplicação da conjectura de Collatz: dado um número natural "n", se "n" for par, ele é dividido por 2; se "n" for ímpar, é multiplicado por 3 e somado 1 ao resultado. Este processo é repetido indefinidamente. A conjectura de Collatz coloca que, seguindo essas duas regras simples, todos os números naturais eventualmente chegarão a 1 (e a sequência 1, 4, 2, 1, 4, 2, 1, 4, 2, 1... se repetirá indefinidamente). Matematicamente, as regras são as seguintes:

se n é par: n = n / 2
se n é ímpar: n = 3n + 1
Vamos agora criar um programa que calcula todos os números na sequência de Collatz para um dado número de entrada. A sequência de comandos é a seguinte:

Digitar um número inteiro positivo maior que 1.
Se o número for par, dividi-lo por 2.
Se o número for ímpar, multiplicá-lo por 3 e somar 1.
Conforme a conjectura de Collatz, a sequência sempre termina em 1, como já explicado anteriormente.
Solicitar o número para o qual a sequência de Collatz será calculada.
Agora, vamos observar a implementação disso na linguagem C presente no Quadro 4.

## Atribuição Composta

Alguns valores de variáveis podem ser modificados com base em seus valores anteriores. Para simplificar esse processo, você pode utilizar o que é conhecido como atribuição composta, indicando qual operação deve ser realizada. Nesse caso, o operador é colocado à esquerda do sinal de atribuição. Por exemplo, y *= x + 1 tem o mesmo efeito que y = y * (x + 1), o que evita colocar a variável do lado direito da atribuição. A atribuição composta foi utilizada no algoritmo do Quadro 4, linha 9, simplificando num = num / 2 por num /= 2 (Atenção na atribuição composta, pois não pode haver espaço entre o operador e o sinal de =).