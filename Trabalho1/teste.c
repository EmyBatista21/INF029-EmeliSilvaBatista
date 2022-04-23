#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//gcc teste.c -o teste

//int pow(int i, int k); 
int main(){
  int i, k;
  int numero = 3456; 
  int n2 = numero;
  int resto, divisor, invertido; 
  invertido = 0;
  k = 10;
  for(i = 0; n2 > k; i++){
    n2 = n2 / k;  
  }
  for(; i >= 0 ; i--){
    divisor = pow(k, i);
    resto = numero % k;
    numero = numero / k; 
    invertido = invertido + (resto * divisor); 
  }
  printf("%d", invertido);
}    