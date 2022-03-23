#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 4
/*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.
*/
typedef struct {
  int num1;
  int num2;
  int num3;
  int num4;
}numero;
void imprime(numero v){ 
  printf("%d, %d, %d, %d",v.num1, v.num2, v.num3, v.num4 );
}

numero ler4Numeros(){
  numero n; 
  printf("Insira o 4 números: ");
  scanf("%d", &n.num1);
  scanf("%d", &n.num2);
  scanf("%d", &n.num3);
  scanf("%d", &n.num4);
  return n; 
}
int main(void){
  numero meusnumeros;
  meusnumeros= ler4Numeros();
  imprime(meusnumeros);   
}





