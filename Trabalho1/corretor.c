#include <stdio.h>
#include <string.h>
//gcc corretor.c EmeliBatista20212160052.c -o T1
//renomeie o arquivo do include abaixo para PrimeiroUltimoNomeMATRICULA.h
#include "EmeliBatista20212160052.h"

void testQ1();

int main(){
  testQ1();
}
void testQ1()
{
  char str[11];
  strcpy(str, "29/02/2015");
  printf("%d\n", q1(str) == 0);
  strcpy(str, "29/02/2012");
  printf("%d\n", q1(str) == 1);
  strcpy(str, "9/13/2014");
  printf("%d\n", q1(str) == 0);
  strcpy(str, "45/4/2014");
  printf("%d\n", q1(str) == 0);
  strcpy(str, "/9/2014");
  printf("%d\n", q1(str) == 0);
  //printf("%d %d %d", dq.iDia, dq.iMes, dq.iAno); 
}