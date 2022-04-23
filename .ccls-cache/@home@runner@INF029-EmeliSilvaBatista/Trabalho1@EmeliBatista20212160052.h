#ifndef TRABALHO1_EMELIBATISTA20212160052_H
#define TRABALHO1_EMELIBATISTA20212160052_H

typedef struct{
  int iDia;
  int iMes;
  int iAno;
  int valido;
}DataQuebrada; 

//gcc EmeliBatista20212160052.c -o T1
int q1(char data[]);
int q5(int numero);
DataQuebrada quebraData(char data[]);
#endif //TRABALHO1_EMELIBATISTA20212160052_H