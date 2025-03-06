# Forçar interrupção de repetição: break

Vamos analisar as características do break nos diferentes contextos que pode ser aplicado:

Loop: dentro de um loop, quando o break é encontrado, a execução do loop é imediatamente interrompida, e o controle é passado para a instrução que segue o loop.

Switch: no contexto de um bloco switch-case, o break é utilizado para sair do bloco switch quando um case (caso) correspondente é encontrado e executado. Se o break não for usado em um bloco switch, a execução continuará nos cases seguintes até que um break seja encontrado ou até o fim do bloco switch ser alcançado.

Para compreender melhor o uso do break, veja o exemplo no Quadro 1. Neste programa, um número secreto é predefinido como 7. O programa solicita que o usuário insira um número e verifique se este é igual ao número secreto. Se o número inserido for igual ao número secreto, o programa imprime uma mensagem de parabéns e usa break para sair do loop while. Caso contrário, o programa continua pedindo ao usuário que insira um novo número até que o número correto seja adivinhado. O uso de break garante que o loop seja interrompido assim que o número correto for inserido.