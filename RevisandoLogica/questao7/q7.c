#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que verifique se um número é primo*/
void iniciotela(){
    printf(" =============================== \n");
    printf("||Calculadora de números primos||\n");
    printf(" =============================== \n");
}

void main(){
    int numero, div, naoPrimo, somaPrimos;
    setlocale(LC_ALL,"Portuguese");
    system("clear"); 
    iniciotela();
    printf("Informe um número: ");
    scanf("%d", &numero);
    for(div = 2, naoPrimo = 0; div < numero; div++){
        if(numero % div == 0){
            naoPrimo++;
            somaPrimos += numero;
            break; 
        }
    }
    if(naoPrimo > 0){
        printf("O número %d não é Primo\n", numero);
    }else
        printf("O número %d é primo\n", numero);
    

}