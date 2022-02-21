#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou de menor. 
O programa deve repetir essa ação até que uma idade negativa seja informada*/

void main(){
    int idade; 
    setlocale(LC_ALL,"Portuguese"); 
    do{
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        if(idade >= 0){
            if(idade >= 18){
                printf("Você é de maior\n");
            }else
                printf("Você é de menor\n");
        } else
            printf("Finalizando o programa...");
    }while(idade >= 0); 
}