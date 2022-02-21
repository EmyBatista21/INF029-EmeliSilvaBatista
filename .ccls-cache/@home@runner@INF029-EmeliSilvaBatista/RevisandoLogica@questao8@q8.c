#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que calcula o fatorial de um número*/

void main(){
    int numero, i, fat, numPrintf; 
    setlocale(LC_ALL,"Portuguese"); 
    printf("Insira o número: ");
    scanf("%d", &numero);
    numPrintf = numero;
    for(i = 1, fat = 1; i <= numero; numero--){
        fat = fat * numero;
    }
    printf("Fatorial de %d = %d", numPrintf, fat);
}