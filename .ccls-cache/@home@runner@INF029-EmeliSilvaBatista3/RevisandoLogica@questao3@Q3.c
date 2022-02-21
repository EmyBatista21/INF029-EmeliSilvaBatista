#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas*/

void main(){
    int x, y, z;
    setlocale(LC_ALL,"Portuguese"); 
    printf("Insira dois valores: ");
    scanf("%d", &x, &y);
    printf("X = %d\nY = %d\n", x, y);
    z = x;
    x = y;
    y = z;
    printf("X = %d\nY = %d", x, y);
}