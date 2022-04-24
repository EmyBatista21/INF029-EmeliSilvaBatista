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
int q3(char str[], char letraBuscada, int isCaseSensitive);
int q5(int numero);
int q6(int numero, int numBusca);

DataQuebrada quebraData(char data[]);
#endif //TRABALHO1_EMELIBATISTA20212160052_H