#include <stdio.h>
// gcc funcaoRecursiva.c -o recursiva -Wno-unused-result
int recursiva(); 
int imprimeDecrescente(); 
int imprimecrescente();
int main(void){
  int numero, numeroFinal;
  printf("Insira um número: ");
  scanf("%d", &numero);
  //recursiva(numero); 
  //imprimeDecrescente(numero); 
  imprimecrescente(numero); 
}

int recursiva(int numero){
  int i = 0;
  int numPrint = numero; 
  if(i != numero -1){
    i++;
    numero = numero * recursiva(numero - 1);  
  }
  printf("O fat de %d eh %d", numPrint, numero);
  return numero;
}

int imprimeDecrescente(int numero){
  if(numero >= 0){
    printf("%d, ", numero);
    numero = numero - imprimeDecrescente(numero - 1); 
  }
  return numero; 
}

int imprimecrescente(int numAux){
  int numero = 0;
  if(numAux != numero){
    printf("%d, ", numero);
    numero = numero + imprimecrescente(numero + 1); 
  }
  return numero; 
}