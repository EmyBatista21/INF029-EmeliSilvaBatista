#include <stdio.h>

void imprimir();

int main(void) {
  int numero;
  printf("A partir de que numero imprimir?:");
  scanf("%d",&numero);
  imprimir(numero);
}

void imprimir(int num) {
  if(num > 0){
  	printf("%d, ", num);
    imprimir(num - 1);
  }else{
    printf("%d", num);
  }
}