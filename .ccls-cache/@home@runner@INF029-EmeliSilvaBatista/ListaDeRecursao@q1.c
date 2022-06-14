#include <stdio.h>
#include <locale.h>

// Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.

// gcc q1.c -o q1

int fat();

int main(void){
  printf("%d\n", fat(5) == 120);
  printf("%d\n", fat(3) == 6);
  printf("%d\n", fat(10) == 120);
  
}

int fat(int num){
  int i = 0; 
  /*printf("Insira um número: ");
  scanf("%d", &num);*/
  if(i != num - 1){
    i++;
    num = num * fat(num - 1);
  }
  return num;
}