#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre o valor absoluto da diferen�a entre elas
    int nota1, nota2, resultado;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &nota1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &nota2);
    resultado = abs(nota1-nota2);
    printf("O valor absoluto �: %d",resultado);





}

