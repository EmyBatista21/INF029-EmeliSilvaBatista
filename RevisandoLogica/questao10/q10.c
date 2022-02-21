#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 2

/*Faça um programa que leia os dados de nome, idade, sexo e cpf de 5 pessoas. 
Ao final imprima tudo. Utilize vetor e struct.*/
void iniciotela(){
    printf("==========================\n");
    printf("     SEJA BEM VINDA(O)    \n");
    printf("==========================\n");
}
void main(){
    setlocale(LC_ALL,"Portuguese"); 
    typedef struct pessoas {
        char nome[100];
        char sexo[15];
        int idade;
        char cpf[11];
    };
    
    struct pessoas pessoa[tam];
    int i; 

    iniciotela();
    for(i = 0; i < tam; i++){
        printf("==== Dados da %d° pessoa ====\n", i + 1);
        printf("Insira seu nome: ");
        fgets(pessoa[i].nome, 100, stdin);
        printf("Qual o seu sexo?: ");
        fgets(pessoa[i].sexo, 20, stdin);
        printf("Qual sua idade?: ");
        scanf("%d", &pessoa[i].idade);
        fflush(stdin); 
        printf("Insira seu CPF (*APENAS NÚMEROS*): ");
        fgets(pessoa[i].cpf, 11, stdin); 
        fflush(stdin);
        
    }
    system("clear");
    iniciotela();
    for(i = 0; i < tam; i++){
        printf("==== Dados da %d° pessoa ====\n", i + 1);
        printf("Nome: %s", pessoa[i].nome);
        printf("Sexo: %s", pessoa[i].sexo);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("\n");
    }
    
}