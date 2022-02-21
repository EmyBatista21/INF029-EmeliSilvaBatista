#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

/*Faça um programa que leia 10 números do usuário e informe quais deles são primos. 
Além disso, mostre a soma de todos os números primos existentes*/
void iniciotela(){
    printf(" =============================== \n");
    printf("||Calculadora de números primos||\n");
    printf(" =============================== \n");
}

void calculoPrimos(){
    int numero, div, naoPrimo, i, j, atual, somaPrimos = 0;
    int numeros[tam] ;
    int primos[tam];
    setlocale(LC_ALL,"Portuguese");
    
    printf("Insira %d números: ", tam);
    for(i = 0; i < tam; i++){
        scanf("%d", &numeros[i]);
        primos[i] = numeros[i];
    }
    for(i = 0; i < tam; i++){
        for(div = 1;  div < numeros[i]; div++){
            if(numeros[i] % div == 0 && div > 1){
                numeros[i] = 0;
                break;
            }
        }
        if(numeros[i] == 1){
            numeros[i] = 0;
        }
    }
    for(i = 0; i < tam; i++){
        somaPrimos += numeros[i];
        if(numeros[i] > 0){
            if(i < tam -1){
                printf("%d...", numeros[i]);
            } else 
                printf("%d", numeros[i]);
        }
    }
    printf("\n");
    printf("A soma dos primos = %d ", somaPrimos);
    
}
void main(){
    system("clear"); 
    iniciotela();
    calculoPrimos();
}