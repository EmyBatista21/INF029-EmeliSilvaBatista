#include <stdio.h>

int inverter();
// gcc q3.c -o q3

int main(void){
  // Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321

  int num, invertido;
  printf("%d", inverter(1230));
}

int inverter(int num){
  int result;
  if(num >= 0 && num < 10) 
    return num;
  else {
    printf("%d", num % 10);
    num = num / 10;
    return inverter(num);
  }
}



