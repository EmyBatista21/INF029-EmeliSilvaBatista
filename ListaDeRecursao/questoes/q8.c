#include <stdio.h>

int mdc();

int main(void){
  /*O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e
y. Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x
e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso
contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto*/
  int x = 0;
  int y = 0; 
  int result = 0;
  printf("Insira o primeiro valor: ");
  scanf("%d", &x);
  printf("Insira o segundo valor: ");
  scanf("%d", &y);
  result = mdc(x, y);
  printf("O MDC é: %d\n", result);
}


int mdc(int n1, int n2) {
	if( n2 == 0) {
		return n1;
	}else
	  return mdc(n2, n1%n2);
}