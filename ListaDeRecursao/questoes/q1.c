#include <stdio.h>

int fatorial();
// gcc q1.c -o q1

int main(void){
  // Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
  int num, fat;
  printf("Informe um número para calcular o fatorial: ");
  scanf("%d", &num);
  fat = fatorial(num);
  printf("O fat de %d é %d", num, fat);
}

int fatorial(int numero){
  int i = numero;
  if(i == 1){
    return 1;
  }else{
    i--;
    numero = numero * fatorial(numero - 1);  
    return numero;
  }
}