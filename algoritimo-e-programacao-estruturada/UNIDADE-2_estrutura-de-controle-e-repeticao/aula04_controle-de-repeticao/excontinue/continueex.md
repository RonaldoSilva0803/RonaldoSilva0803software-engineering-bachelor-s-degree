# Reiniciar repetição: continue

O comando continue é uma estrutura de controle na linguagem de programação C que é usado para pular a execução das instruções restantes em um loop, e então continuar com a próxima iteração desse loop. Diferente do break, que encerra completamente o loop, o continue permite ao programador pular apenas o restante do bloco de código da iteração atual dentro do loop e avançar para a próxima iteração, ignorando as instruções restantes dentro do bloco. Mas o loop não é encerrado!

Veja agora as características e a definição do comando continue na linguagem C, e tente traçar um paralelo de comparação com o comando break estudo anteriormente:

Pular iteração: o continue é usado para pular a iteração atual do loop, ou seja, ele faz com que o programa ignore o restante das instruções no bloco do loop atual e avance para a próxima iteração do loop.

 Útil para filtragem: o continue é frequentemente utilizado para implementar condições de filtragem em um loop, permitindo que certas iterações sejam ignoradas com base em uma condição específica.
 
Vamos agora a um exemplo usando continue. O programa do Quadro 2 percorre os números de 1 a 20 e a cada iteração testa se o número corrente é par, e caso o seja, o programa interrompe a iteração e não imprime o número (pois irá pular o printf em seguida). Ao final, o programa exibe apenas os números ímpares de 1 a 20.