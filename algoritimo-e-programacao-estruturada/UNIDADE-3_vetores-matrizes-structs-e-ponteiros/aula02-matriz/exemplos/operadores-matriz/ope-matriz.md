# Operações com Matrizes

Neste momento vamos abordar alguns exemplos de utilização de matrizes para reforçar o conteúdo aprendido até aqui! Vamos lá?

Primeiramente, vamos aprender a manipular os índices de uma matriz dentro de laços for aninhados. Para isso, considere o seguinte exemplo: ler uma matriz quadrada 3x3 e retornar a soma dos elementos de sua diagonal principal e diagonal secundária. O Quadro 3 apresenta o algoritmo que resolve este problema.

## Exemplo com matrizes.

O primeiro conjunto de laços for é responsável por ler os elementos da matriz, percorrendo todos os elementos, em que i faz a indexação das linhas, e j das colunas. Já o segundo laço for é responsável por calcular a soma das diagonais. A diagonal primária de uma matriz é aquela cujo índice da linha é igual ao índice da coluna, portanto somamos os elementos da matriz que possuem o mesmo valor de índice (matriz[i][i]). Já a diagonal secundária seriam os seguintes elementos: matriz[0][2], matriz[1][1], e matriz[2][0]. Perceba que enquanto o índice de linhas aumenta de um em um, o índice de colunas diminui de um em um. Então uma possível solução seriam duas variáveis de controle dentro de um mesmo for, uma para linha e outra para coluna, conforme vemos no Quadro 3.

Outro exemplo clássico é relacionado à multiplicação de matrizes. Veja no Quadro 4 um programa em C que lê duas matrizes e suas respectivas dimensões, verifica se a multiplicação entre elas é possível e, se for o caso, calcula e exibe o produto das matrizes.