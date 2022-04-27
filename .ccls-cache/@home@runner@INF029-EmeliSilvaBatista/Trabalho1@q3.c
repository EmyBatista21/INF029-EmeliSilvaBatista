#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 250

/*Faça um programa que o usuário informa um texto de até 250, e uma letra. O programa deve
informar quantas vezes essa letra aparece no texto. Desconsidere acentos nas vogais. Ou seja, um
'á' é igual a 'a'.*/

//gcc q3.c -o q3

int main(void){
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
  
}