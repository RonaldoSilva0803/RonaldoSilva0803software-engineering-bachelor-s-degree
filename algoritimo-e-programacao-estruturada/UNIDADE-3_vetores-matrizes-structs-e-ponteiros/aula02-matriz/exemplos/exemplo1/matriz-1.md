# Inicialização e utilização
Para criar uma matriz em C, a sintaxe utilizada é a seguinte:

<tipo> <nome_da_matriz>[linhas][colunas];
E aqui estão alguns exemplos de declaração de matrizes. Na primeira linha, uma estrutura com 3 linhas e 2 colunas é criada. Na segunda linha, temos a criação da estrutura correspondente à Tabela 1, com 5 linhas e 2 colunas. Por fim, na terceira linha vemos uma matriz de 3 linhas e 2 colunas sendo criada e inicializada. Perceba que colocamos os valores em subconjuntos conjuntos entre chaves, em que cada um representa uma linha da matriz.

int coordenadas[3][2];

float temperaturas[5][2];

int valores[3][2] = {{2, 3}, {5, 7}, {9, 11}}; 

Para manipular matrizes bidimensionais, é necessário especificar dois índices, na qual a atribuição de valores é feita da seguinte forma:

matriz[M][N] = valor;
Aqui, "M" representa a linha na qual o valor será armazenado e "N" representa a coluna. Assim como nos vetores, os índices de uma matriz em C sempre começam a partir de zero.

Vamos declarar uma matriz em C para armazenar as notas do primeiro e segundo bimestre de três alunos. No Quadro 1, na linha 3, declaramos uma matriz denominada "notas" com 3 linhas e 2 colunas, o que implica no armazenamento de 6 valores no total (produto das linhas pelo número de colunas). Nas linhas 4 e 5, são armazenadas as notas do primeiro aluno. É importante notar que as linhas (primeiro índice) permanecem fixas, enquanto as colunas (segundo índice) são alteradas para registrar as notas dos respectivos alunos. Este procedimento é repetido para o segundo e terceiro aluno, que são armazenados na segunda e terceira linha da matriz, respectivamente.