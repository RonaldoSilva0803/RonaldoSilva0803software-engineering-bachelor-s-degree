Para armazenar valores inseridos pelo usuário em uma matriz, usamos a função scanf(), indicando os dois índices que selecionam a posição na qual desejamos armazenar o valor. Da mesma forma, para imprimir valores, também utilizamos os dois índices para especificar a posição do elemento a ser impresso. Segue um exemplo prático:

printf("Digite uma nota: ");

scanf("%f", &nota[1][0]);

printf("Nota digitada: %.2f", nota[1][0]);

Neste exemplo, a nota inserida pelo usuário será armazenada na linha 1, coluna 0 da matriz. Posteriormente, o valor armazenado nessa posição será exibido na tela com duas casas decimais, conforme especificado no comando da linha 3.

E ainda com base no Quadro 1, como poderíamos deixar a inserção de dados a cargo do usuário e de forma otimizada? Simples! Utilizando dois laços de repetição for aninhados, uma para percorrer as linhas e outro para percorrer as colunas em cada uma das linhas. Veja o exemplo no Quadro 2.