/*
6+9=15 parece bom. Mas como é que 4+6=2?

Veja só, Mofiz trabalhou duro ao longo de seu curso de Lógica Digital, mas quando lhe pediram para implementar um somador de 32 bits para o exame de laboratório, ele cometeu algum erro na parte de design. Depois de vasculhar o design por meia hora, ele encontrou sua falha!! Ele estava fazendo adição bit a bit, mas seu bit de transporte sempre tinha saída zero. Desta forma,


4 = 00000000 00000000 00000000 00000100
+6 = 00000000 00000000 00000000 00000110
------------------------------------- ---
2 = 00000000 00000000 00000000 00000010

Ainda bem que ele finalmente encontrou seu erro, mas já era tarde demais. Considerando seu esforço ao longo do curso, o instrutor lhe deu mais uma chance. Mofiz teve que escrever um programa eficiente que receberia 2 números decimais de 32 bits sem sinal como entrada e produziria um número decimal de 32 bits sem sinal como a saída somando da mesma maneira que seu circuito.

Entrada
Em cada linha de entrada haverá um par de inteiros separados por um único espaço. A entrada termina em EOF.

Resultado
Para cada linha de entrada, o programa deve fornecer uma linha de saída: o valor depois de somar os dois números no modo "Mofiz".
  */