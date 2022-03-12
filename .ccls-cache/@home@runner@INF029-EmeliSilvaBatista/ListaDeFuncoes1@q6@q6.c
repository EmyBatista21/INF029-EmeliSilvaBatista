#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. A função main deve imprimir essas três letras.*/

char main(){
  char lt1, lt2, lt3;
  scanLetras(&lt1, &lt2, &lt3);
  printf("%c %c %c", lt1, lt2, lt3); 
}

char scanLetras(char l1, char l2, char l3){
  printf("Insira 3 letras");
  scanf("%c %c %c", &l1, &l2, &l3);
}