#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis 
lidas sem utilizar variável auxiliar*/

void main(){
    int x, y; 
    setlocale(LC_ALL,"Portuguese"); 
    printf("Informe dois valores: ");
    scanf("%d %d", &x, &y);
    printf("X = %d\nY = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("X = %d\nY = %d\n", x, y);

}