#include <stdio.h>
#include <stdlib.h>
#include "EmeliBatista20212160052.h" // Substitua pelo seu arquivo de header renomeado

//gcc corretor.c EmeliBatista20212160052.c -o T1
DataQuebrada quebraData(char data[]);
int q1(char data[]); 
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









/*void testQ2(){
  char text[TAM], letra;
  int i, cont; 
  printf("Insira um texto com até 250 caracteres: ");
  fgets(text, TAM, stdin);
  printf("Agora insira uma letra: ");
  scanf("%c", &letra);
  getchar(); 
  

  for(i = 0, cont = 0; i < TAM; i++){
    if(text[i] == letra){
      cont++;
    }
  }
  printf("A letra %c aparece %d vezes no texto", letra, cont); 
}*/
