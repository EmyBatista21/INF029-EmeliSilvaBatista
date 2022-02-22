#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

/*Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário 
e retornar os três números. A função main deve imprimir esses três números. Utilize vetor para fazer
o retorno..*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeros[TAM], i;
    
    fscan(numeros); 
    
    for(i = 0; i < TAM; i++){
      if(i != TAM - 1){
        printf("%d,", numeros[i]);
      } else 
        printf("%d", numeros[i]);
    }
    return 0; 
}

void fscan(int num[TAM]){
    int i; 
    for(i = 0; i < TAM; i++){
        printf("Insira o %d° número: ", i + 1);
        scanf("%d", &num[i]);
    }
}