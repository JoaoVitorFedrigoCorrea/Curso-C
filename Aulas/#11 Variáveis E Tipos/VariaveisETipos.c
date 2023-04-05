#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprime Olá
    printf("Olá \n");

    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n", a);

    //Lendo valor quebrado
    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    //Lendo letra
    char letra = 't';
    printf("\nO valor da letra é = %c \n", letra);
    // Limpa o lixo de Buffer
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor da letra mudou para %c", letra);
}
