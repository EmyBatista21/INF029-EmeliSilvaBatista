#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.
*/

//Passando parâmetros para função auxiliar e imprimindo na própria. 
/*void main(){
  int num1, num2, num3, num4, result;
  ler4Numeros(5, 6, 7, 8); 
}

int ler4Numeros(int n1, int n2, int n3, int n4){
  int soma;
  soma = n1 + n2 + n3 + n4;
  printf("%d", soma);
  return 0; 
}*/

//================================================
//Lendo valores na função principal, passando os paramentros para a função auxiliar e somando, retornando resultado para função principal.

/*void main(){
  int num1, num2, num3, num4, result;
  result = ler4Numeros(1, 2, 3, 4);  
  printf("%d", result);
}

int ler4Numeros(int n1, int n2, int n3, int n4){
  int soma;
  soma = n1 + n2 + n3 + n4;
  return soma; 
}*/
//================================================
//Lendo valores na função auxiliar, somando e retornando resultado para função principal.

void main(){
  int num1, num2, num3, num4, result;
  result = ler4Numeros();  
  printf("%d", result);
}

int ler4Numeros(int n1, int n2, int n3, int n4){
  int soma;
  printf("Digite 4 números: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
  soma = n1 + n2 + n3 + n4;
  return soma; 
}

//================================================

