#include <stdio.h>
int somar();

int main(void) {
  /*Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.*/
  int numero, result;
  printf("Até onde deseja somar?: ");
  scanf("%d",&numero);
  result = somar(numero);
  printf("A soma de %d até %d = %d", 1, numero, result);
}

int somar(int num) {
  float result=0;
  
  if(num == 0)
    return 0;
  else
    return num + somar(num - 1);
}

