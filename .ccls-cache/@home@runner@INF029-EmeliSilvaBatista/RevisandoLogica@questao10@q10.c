#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 2

/*Faça um programa que leia os dados de nome, idade, sexo e cpf de 5 pessoas. 
Ao final imprima tudo. Utilize vetor e struct.*/
void iniciotela(){
    printf("==========================\n");
    printf("     SEJA BEM VINDA(O)    \n");
    printf("==========================\n");
}
int main(){
    setlocale(LC_ALL,"Portuguese");  
    typedef struct dadosPessoas {
        char nome[100];
        char sexo;
        int idade;
        char cpf[16];
    }Pessoas;
    
    Pessoas pessoa[tam];
    int i; 

    for(i = 0; i < tam; i++){ 
        printf("==== Dados da %d° pessoa ====\n", i + 1);
        printf("Insira seu nome: ");
        fgets(pessoa[i].nome, 100, stdin);
        printf("Qual o seu sexo? F/M: ");
        scanf("%c", &pessoa[i].sexo); 
        printf("Qual sua idade?: ");
        scanf("%d", &pessoa[i].idade); 
        getchar(); 
        printf("Insira seu CPF: ");
        fgets(pessoa[i].cpf, 16, stdin);
        /*size_t lp = strlen(pessoa[i].cpf) - 1;
        if(pessoa[i].cpf[lp] == '\n'){
          pessoa[i].cpf[lp] = '\0';
        } */
    }
    printf("\n");
    for(i = 0; i < tam; i++){
        printf("==== Dados da %d° pessoa ====\n", i + 1);
        printf("Nome: %s", pessoa[i].nome);
        printf("Sexo: %c\n", pessoa[i].sexo);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("\n");
    }
  return 0; 
}