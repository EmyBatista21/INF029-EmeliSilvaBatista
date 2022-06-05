#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor*/

int main(void){
    int idade;
    setlocale(LC_ALL,"Portuguese"); 
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("Você é maior de idade");
    }else
        printf("Você é menor de idade");
}