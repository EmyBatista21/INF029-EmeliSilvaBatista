#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3
/*Crie um programa que tenha uma função subtrai e a função main. 
A função main deve ler três valores, enviar para a função subtrai. 
A função subtrai deve realizar a subtração dos três valores 
(primeiro menos o segundo menos o terceiro) e retornar o valor. 
A Função main deve imprimir o resultado da subtração.*/
int main(){
    int resultado;
    int v1, v2, v3;
    printf("Insira o 3 valores: ");
    scanf("%d %d %d", &v1, &v2, &v3);
    
    resultado = subtrai(v1, v2, v3); 
    printf("%d - %d - %d = %d",v1, v2, v3, resultado);
    return 0;
}

int subtrai(int n1, int n2, int n3){
    int result;
    result = (n1 - n2) - n3;
    return result;
}