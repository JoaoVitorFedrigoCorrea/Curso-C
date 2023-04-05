#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre o valor absoluto da diferença entre elas
    int nota1, nota2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%d", &nota1);
    printf("Digite o segundo número: ");
    scanf("%d", &nota2);
    resultado = abs(nota1-nota2);
    printf("O valor absoluto é: %d",resultado);





}

