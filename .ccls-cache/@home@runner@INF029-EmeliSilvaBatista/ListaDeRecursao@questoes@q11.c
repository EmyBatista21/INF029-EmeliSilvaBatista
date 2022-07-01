#include <stdio.h>

int multiplica();
int main(void) {
    /*A multiplicação de dois números inteiros pode ser feita através de somas
sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a
multiplicação de dois inteiros.*/
  int num1, num2, result;
  printf("Insira o 1º numero: ");
  scanf("%d",&num1);
  printf("Insira o 2º numero: ");
  scanf("%d",&num2);  
  result = multiplica(num1, num2);
  printf("%d * %d = %d", num1, num2, result);
}

int multiplica(int n1,int n2) {
  if(n1 == 0)
    return 0;
  else
    return n2 + multiplica(n1 - 1, n2);
}

