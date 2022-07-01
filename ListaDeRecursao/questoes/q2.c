#include <stdio.h>

int fibonacci(int a);

int main(){
  int numero = 0;
  int fib = 0;
  int result;
  printf("Insira um valor para calcular o termo: ");
  scanf ("%d", &numero);
  fib = fibonacci(numero);
  printf ("O valor na posição %d é %d\n", numero, fib);
}

int fibonacci (int num){
  int fib = 0;
  if (num == 0){
    return 0;
  }else if (num == 1 || num == 2){
    return 1;
  }else{
    fib = fibonacci(num - 1) + fibonacci(num - 2);
    return fib;
  }
}