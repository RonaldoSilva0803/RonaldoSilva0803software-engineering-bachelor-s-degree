# Fluxo de execução arbitrário: goto

Antes de irmos aos exemplos, é importante que você se atente a estas características do comando goto:

Desvios não estruturados: o goto permite que você faça desvios não estruturados, o que significa que ele pode pular para qualquer lugar no programa no qual um rótulo seja definido.

Riscos de uso indevido: o goto pode tornar o código complexo e difícil de entender. Uso inadequado de goto pode levar a problemas como loops infinitos, pontos de saída inesperados e tornar o código propenso a erros.

Escopo local: o goto é limitado ao mesmo bloco de código e não pode ser usado para desviar o controle para fora de uma função.

Alternativas mais estruturadas: em muitos casos, é possível substituir o goto por estruturas de controle mais estruturadas, como if, else, while, for e funções. Isso torna o código mais legível e mais fácil de depurar e manter.

Veja agora o exemplo do Quadro 3, em que o goto é usado para direcionar o fluxo de execução para o rótulo 'erro' se o número inserido não for positivo. O programa imprime uma mensagem de erro e termina. Este é um exemplo de uso cuidadoso de goto para manipular situações específicas, porém, é possível perceber que um simples if-else resolveria o problema, e ficaria muito mais simples de entender a lógica!