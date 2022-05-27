#include <stdio.h>

// gcc 11_05.c -o 11_05 -Wno-unused-result
int ponteirosStart();
int main(void){
  ponteirosStart();
}

int ponteirosStart(){
  int i;
  i = 2;
  int *p;
  p = NULL;
  p = &i;
  printf("Endereco de p : %p \n", &p);
  printf("Endereco de i : %p \n", p);
  printf("Endereco de i : %p \n", &i);
  printf("Valor de i : %d \n", *p);

  return 0; 
}