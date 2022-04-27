#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//gcc teste.c -o teste

//int pow(int i, int k); 
int main(){
  int numero = 202222; 
  int numbusca = 22; 
  int numCont = numero; 
  int resto1, resto2;
  int i, j, k;
  j = 10; 
  for(i = 0; numCont >= 10; i++){
    numCont = numCont / 10; 
  }
  for(k = 0; k <= i; k++){
    resto1 = numero % 10;
    numero = numero / 10;
    resto2 = numero % 10;
    if()
  }
  printf("%d\n", i); 
  return i;  
}