/*
No tabuleiro de xadrez, o quadrado do tabuleiro na linha 1, coluna 1 (canto superior esquerdo) é sempre branco e as cores das casas se alternam entre o branco e o preto, conforme o padrão conhecido como ... xadrez! Dessa forma, como o tabuleiro tradicional possui oito fileiras e oito colunas, a casa da fileira 8, coluna 8 (canto inferior direito) também será branca. Neste problema, porém, queremos saber a cor do quadrado do tabuleiro no canto inferior direito de uma bandeja com qualquer dimensão: L linhas e C colunas. No exemplo da figura, para L = 6 e C = 9, o quadrado do tabuleiro no canto inferior direito será preto!



Entrada
A primeira linha da entrada contém um inteiro L (1 ≤ L ≤ 1000) indicando o número de linhas no tabuleiro de xadrez. A segunda linha da entrada contém um inteiro C (1 ≤ C ≤ 1000) representando o número de colunas.

Resultado
Imprima uma linha na saída. A linha deve conter um número inteiro, representando a cor da casa no canto inferior direito do tabuleiro: 1, se for branca; e 0, se for preto.
*/




#include <stdio.h>

int main(){
	
	
int l , c;


scanf("%d" , &l);
scanf("%d" , &c);

if((l + c)% 2 == 0 ){
	printf("%d\n" , 1);
}

else 
printf("%d\n" , 0);



		
	return 0;
}

//Passou