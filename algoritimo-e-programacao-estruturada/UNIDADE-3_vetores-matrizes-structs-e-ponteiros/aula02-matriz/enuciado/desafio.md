# Vamos Exercitar?

Prezado estudante, é hora de aplicar todo o conhecimento adquirido até aqui! Para desenvolver o sistema de gerenciamento de notas, podemos usar matrizes para armazenar os dados das notas dos alunos por disciplina e realizar os cálculos necessários. Nesta lógica, cada linha da matriz representa um aluno, e as colunas as respectivas disciplinas.

## Código de resolução. 

Nesta solução utilizamos uma diretiva chamada #define. Em C, ela é usada para criar constantes simbólicas. Ela é uma construção do pré-processador e não uma função da linguagem em si. Com ela, você pode fornecer um nome a um valor constante antes de o programa ser compilado. Ela substitui todas as ocorrências desse nome no código pelo valor constante especificado. No caso desta solução, a linha “#define NUM_ALUNOS 3” cria uma constante simbólica “NUM_ALUNOS” com o valor 3. Em todo o programa, sempre que “NUM_ALUNOS” é usado, ele será substituído por 3 durante a fase de pré-processamento. Isso torna o código mais legível e facilita a manutenção, uma vez que você pode ajustar o valor da constante em um único local, se necessário, em vez de ter que alterar cada ocorrência do valor diretamente.