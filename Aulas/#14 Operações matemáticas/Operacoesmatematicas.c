#include <stdio.h>
#include <stdlib.h>

//Função principal do sistema
void main(){

    //Definindo Variáveis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d\n",a,b, a + b);

    //Subtração
    printf("\n A subtracao de %d e %d = %d\n",a,b, a - b);

    //Divisão
    printf("\n A divisao de %d e %d = %d\n",a,b, a / b);

    //Multiplicação
    printf("\n A multiplicacao de %d e %d = %d\n",a,b, a * b);

    //Resto da divisão
    printf("\n A resto da divisao entre %d e %d = %d\n",a,b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d\n", abs(-3));

    //Pausar o programa após executar
    system("pause");

}
