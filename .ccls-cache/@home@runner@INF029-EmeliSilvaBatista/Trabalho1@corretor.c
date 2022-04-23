#include <stdio.h>
#include <string.h>
#include <math.h>
//gcc corretor.c EmeliBatista20212160052.c -o T1 -lm
//gcc corretor.c -o T1
//renomeie o arquivo do include abaixo para PrimeiroUltimoNomeMATRICULA.h
#include "EmeliBatista20212160052.h"

void testQ1();
void testQ5(); 

int main(){
  //testQ1();
  testQ5(); 
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

void testQ5(){
  int numero;
  printf("%d\n", q5(3456) == 6543);
  printf("%d\n", q5(1000) == 1);
  printf("%d\n", q5(1030) == 301);
  printf("%d\n", q5(123456789) == 987654321);
  printf("%d\n", q5(0) == 0000000);
  printf("%d\n", q5(030) == 3);
}