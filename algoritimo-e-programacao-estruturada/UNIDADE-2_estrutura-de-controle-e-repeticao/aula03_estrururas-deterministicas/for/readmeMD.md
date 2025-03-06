# Instrução for.

Ao analisar a sintaxe comando "for", você pode observar três expressões distintas separadas por ponto e vírgula. A seguir estão os significados de cada uma delas:

Inicialização: instrução de atribuição cuja inicialização é realizada apenas uma vez, antes do início do loop.

Condição: condição final. Realiza um teste que determina se a condição é verdadeira ou falsa. Se a condição for verdadeira, o loop continua; se for falsa, o loop é encerrado.

Incremento: essa parte permite incrementar uma repetição com base em um contador específico (varável de controle inicializada no início do laço). Lembrando que o incremento é executado após os comandos. 

Agora vamos analisar um exemplo simples da estrutura de repetição for, no qual o algoritmo irá calcular a tabuada de um número. Veja o Quadro 1.


Siga em Frente...

# Laço for aninhado
A utilização do laço for é muito popular e ampla. E uma das formas mais comuns e importantes de utilizá-lo é por meio de laços aninhados. Para entendermos melhor, considere a seguinte situação em que queremos calcular e imprimir a tabuada de 1 até 5, uma por linha, da seguinte maneira:

1 2 3 4 5 6 7 8 9 10

2 4 6 8 10 12 14 16 18 20

3 6 9 12 15 18 21 24 27 30

4 8 12 16 20 24 28 32 36 40

5 10 15 20 25 30 35 40 45 50 

Já sabemos que pelo código do Quadro 1 podemos calcular qualquer uma destas linhas. Então a solução seria repetir todo o bloco do for por cinco vezes, mudando o valor da variável num antes de cada for? Poderia ser! Mas e se quiséssemos imprimir a tabuada de 1 a 10 agora? Precisaríamos repetir o for por mais cinco vezes (e sempre alterando estaticamente a variável num). Acredito que tenha dado para perceber que estamos repetindo código, e repetir código não é uma boa prática. Então vejamos: se estamos repetindo o laço for por cinco vezes, isto já caracteriza um laço determinístico com duração de cinco iterações, justamente a definição do laço for conforme estudamos! Então podemos colocar o laço for que calcula e imprime a tabuada dentro de outro laço que controla o número de vezes que a tabuada será calculada e impressa. Analise o Quadro 2 com o código completo.