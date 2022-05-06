#include <stdio.h>
#include <string.h>
#include <math.h>
//gcc corretor.c EmeliBatista20212160052.c -o t1 -lm
//renomeie o arquivo do include abaixo para PrimeiroUltimoNomeMATRICULA.h
#include "EmeliBatista20212160052.h"

void testQ1();
void testQ2();
void testQ3();
void testQ4();
void testQ5();
void testQ6();

int main(){
  testQ3();
  //testQ5(); 
  //testQ6(); 
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

void testQ2(){
  
}

void testQ3()
{
    char str[250];
    strcpy(str, "Renato Lima Novais");
    printf("%d\n", q3(str, 'a', 0) == 3);
    printf("%d\n", q3(str, 'b', 0) == 0);
    printf("%d\n", q3(str, 'l', 1) == 1);
    printf("%d\n", q3(str, 'l', 0) == 1);
    printf("%d\n", q3(str, 'L', 0) == 1);
}

void testQ4(){
  
}

void testQ5(){
  int numero;
  printf("%d\n", q5(3456) == 6543); //1
  printf("%d\n", q5(1000) == 1); //1
  printf("%d\n", q5(1030) == 301); //1
  printf("%d\n", q5(123456789) == 987654321); //1
  printf("%d\n", q5(0) == 0000000); //1
  printf("%d\n", q5(0300) == 3); //1
}

void testQ6(){
  printf("%d\n", q6(34567368, 3) == 2); //1
  printf("%d\n", q6(34567368, 4576) == 0); // 1
  printf("%d\n", q6(3539343, 3) == 4); // 1
  printf("%d\n", q6(3539343, 39) == 1); // 1
  printf("%d\n", q6(44, 44) == 1); //1
  printf("%d\n", q6(44, 4) == 2); // 1
}