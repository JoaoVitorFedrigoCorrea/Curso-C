#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre a m�dia entre elas

    int a = 6, b = 3, c = (a+b) / 2;

    //sla
    printf("A m�dia do aluno miguel deu %d\n",c);

}



