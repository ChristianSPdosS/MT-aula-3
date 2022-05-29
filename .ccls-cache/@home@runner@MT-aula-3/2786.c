/*
A escola pretende mudar o piso de uma sala de aula e a diretora aproveitou para passar uma tarefa aos alunos. A sala tem a forma de um retângulo de largura L metros e comprimento C metros, onde L e C são inteiros. O diretor precisa comprar telhas cerâmicas para cobrir todo o piso da sala. Seria fácil calcular quantos ladrilhos seriam necessários se cada ladrilho fosse um quadrado de 1 metro. O problema é que a pequena laje que o diretor quer comprar é um quadrado de 1 metro de diagonal, não de lado. Além disso, ela quer preencher o chão da sala com as diagonais dos ladrilhos alinhados nas laterais da sala, como na figura.



A loja fornecerá telhas do tipo 1: inteiras; do tipo 2, que são da metade do tipo 1, cortadas na diagonal; e lajes tipo 3, que correspondem à metade do tipo 2. Veja os três tipos de lajes na figura.

É muito claro que sempre são necessários 4 ladrilhos tipo 3 para os cantos da sala. A atribuição que um diretor passou para os alunos é o número de prêmios dos tipos 1 e 2 que são necessários. Na figura, para L = 3 e C = 5, foram necessários 23 do tipo 1 e 12 do tipo 2. Seu programa precisa calcular, dados os valores de L e C, a quantidade de ladrilhos tipo 1 e tipo 2.

Entrada
A primeira linha inicial contém um inteiro L (1 ≤ L ≤ 100) indicando a largura da sala. Uma segunda linha contém um inteiro C (1 ≤ C ≤ 100) representando o comprimento da sala.

Resultado
Imprima duas linhas na saída. O primeiro deve conter um número inteiro, representando o número de blocos do tipo 1 necessários. O segundo deve conter um número inteiro, indicando o número de ladrilhos do tipo 2.

Amostras de entrada	    Amostras de saída
3                        23
      
5                        12      



1                        1

1                        0

  */



#include <stdio.h>

int main(){

int l , c, q, t;

  scanf("%d" , &l);
  scanf("%d" , &c);

  q = (l * c) + (c - 1) * (l - 1);

 t = (l - 1) * (c - 1) + (c - 1) * (l - 1);

printf("%d\n" , q );
  printf("%d\n" , t);

  
  return 0;
}

//Falhou!