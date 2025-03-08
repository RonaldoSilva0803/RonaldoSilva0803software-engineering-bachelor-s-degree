

É importante observar que, nesse caso, o operador "&" não é obrigatório na função scanf().

Essa forma de atribuição possui uma limitação: somente é possível armazenar palavras simples, e não compostas. Isso ocorre porque a função scanf() interrompe a atribuição ao encontrar um espaço em branco. Para contornar essa limitação, uma opção é utilizar a função fgets(), que também faz parte da biblioteca padrão <stdio.h>. Essa função é utilizada com a seguinte sintaxe:

fgets(destino, tamanho, fluxo);
O parâmetro "destino" especifica o nome da string que será utilizada para o armazenamento. O parâmetro "tamanho" deve ser o mesmo declarado para a string. O parâmetro "fluxo" indica a origem da string; no caso em questão, sempre virá do teclado, e, portanto, utilizamos "stdin" (entrada padrão). Segue um exemplo prático: