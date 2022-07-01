#include <stdio.h>

void imprimir();

int main(void) {
  int numero;
  printf("Ate onde quer imprimir?:");
  scanf("%d",&numero);
  imprimir(numero, 0);
}

void imprimir(int n, int num) {
  if (n == num)
  	printf("%d", num);
  else{
      printf("%d,", num);
    
    imprimir(n, num + 1);
 }
}