#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia a idade de duas pessoas e imprima a soma das idades*/

void main(){
    int pessoa1, pessoa2, soma;
    setlocale(LC_ALL,"Portuguese"); 
    printf("Idade da 1° pessoa: ");
    scanf("%d", &pessoa1); 
    printf("Idade da 2° pessoa: ");
    scanf("%d", &pessoa2); 
    soma = pessoa1 + pessoa2;
    printf("A soma das idades é %d", soma); 
}