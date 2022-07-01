#include <stdio.h>
// gcc q5.c -o q5

int soma();
int main(){
  //Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
  int result;
  int num = 0;
    while(num <= 0){
      printf ("Insira um valor para calcular a soma: ");
      scanf ("%d", &num);
    }
  printf("A soma de 1 a %d é %d\n", num, soma(num));
}

int soma(int num){
  int result = 0;
  
  if (num == 1){
    return 1;
  }else{
    result = num + soma(num - 1);
  }
  return result;
}
