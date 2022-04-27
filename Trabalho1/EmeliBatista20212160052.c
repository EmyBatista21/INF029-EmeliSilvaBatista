#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include "EmeliBatista20212160052.h" // Substitua pelo seu arquivo de header renomeado
#define tam 250

//gcc corretor.c EmeliBatista20212160052.c -o t1 -lm

DataQuebrada quebraData(char data[]);
int q1(char data[]);
int q3(char str[tam], char letraBuscada, int isCaseSensitive);
int q5(int numero); 
int q6(int numero, int numBusca); 

DataQuebrada quebraData(char data[]){
  DataQuebrada dq;
  char sDia[3];
  char sMes[3];
  char sAno[5];
  int i;
  
  for(i = 0; data[i] != '/'; i++){
    sDia[i] = data[i];
  }
  if(i == 1 || i == 2){
    sDia[i] = '\0';
  }else  
    dq.valido = 0;
  int j = i + 1; 
  i = 0;
  for(; data[j] != '/'; j++){
    sMes[i] = data[j];
    i++;
  }
  if(i == 1 || i ==  2){
    sMes[i] = '\0';
  }else  
    dq.valido = 0;

  j = j + 1; 
  i = 0;
  for(; data[j] != '\0'; j++){
    sAno[i] = data[j];
    i++;
  }
  if( i == 2 || i == 4){
    sAno[i] = '\0';
  }else{
    dq.valido = 0;
    return dq;
  } 
  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno);

  dq.valido = 1; 
  return dq;
}

int q1(char data[]){
  int dataValida = 1; 
  dataValida = quebraData(data).valido;  

  if(dataValida == 1)
    return 1;
  else
    return 0; 
}

int q3(char str[], char letraBuscada, int isCaseSensitive){
  int iCont, jCont, qtdOcorrencias;
  for(jCont = 0; str[jCont] != '\0'; jCont++);
  if(isCaseSensitive == 0){
    for(iCont = 0; iCont < jCont; iCont++){
      str[iCont] = toupper(str[iCont]);
    }
    letraBuscada = toupper(letraBuscada);  
  }
  for(iCont = 0; iCont < jCont; iCont++){
    if(str[iCont] == letraBuscada){
      qtdOcorrencias++;
    }
  }
  
  return qtdOcorrencias ;
}

int q5(int numero){
  int i, j; 
  int numCont = numero;
  int resto, divisor, invertido; 
  invertido = 0; 
 for(i = 0, j = 10; numCont >= j; i++){
    numCont = numCont / j;  
  }
  for(; i >= 0 ; i--){
    if(numero >= 0){
      divisor = pow(j, i);
      resto = numero % j;
      numero = numero / j; 
      invertido = invertido + (resto * divisor);      
    }
  }
  return invertido; 
}    

int q6(int numero, int numBusca){
  int qtdOcorrencias = 0; 
  int restoNum, restoNumBusca;
  int iCont;
  int numBuscaCop = numBusca;
  
  if(numero == 0 && numBusca == 0){
    qtdOcorrencias++; 
  }
  if (numBusca>10){
    while(numero > 0){
      restoNum = numero % 10;
      restoNumBusca = numBusca % 10;
  
      if(restoNum == restoNumBusca){
        iCont = 1;
        while(restoNum == restoNumBusca && numero > 0 && iCont > 0){
          numero = numero /10;
          numBusca = numBusca / 10;
          restoNum = numero % 10;
          restoNumBusca = numBusca % 10;
    
          if(numBusca < 10 && numBusca == restoNum){
            restoNum = numero;
            iCont = -1;
          }
          if(iCont < 0){
            qtdOcorrencias++;
            numero = numero /10;
            numBusca = numBuscaCop;
          }
        }
      }else{
        numero = numero / 10;
        numBusca = numBuscaCop;
      }
    }
  }

  else{
   for (  ; numero > 0; ){
        
        restoNum = numero % 10;
        if (restoNum == numBusca) 
        {
          qtdOcorrencias ++;
        }

        numero = numero / 10;
    }
    
  } 
  return qtdOcorrencias; 
}
