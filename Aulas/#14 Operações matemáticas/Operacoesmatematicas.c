#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do sistema
void main(){

    //Definindo Vari�veis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d\n",a,b, a + b);

    //Subtra��o
    printf("\n A subtracao de %d e %d = %d\n",a,b, a - b);

    //Divis�o
    printf("\n A divisao de %d e %d = %d\n",a,b, a / b);

    //Multiplica��o
    printf("\n A multiplicacao de %d e %d = %d\n",a,b, a * b);

    //Resto da divis�o
    printf("\n A resto da divisao entre %d e %d = %d\n",a,b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d\n", abs(-3));

    //Pausar o programa ap�s executar
    system("pause");

}
