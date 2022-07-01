#include <stdio.h>
// gcc q6.c -o q6

int calcular();
int main(){
  //Crie um programa em C, que contenha uma função recursiva que receba doisinteiros positivos k e n e calcule kn. Utilize apenas multiplicações. O programa principal deve solicitar ao usuário os valores de k e n e imprimir o resultado da chamada da função.
  int base, expoente, result;
  printf("Informe a base: ");
  scanf("%d", &base);
  printf("Informe o expoente: ");
  scanf("%d", &expoente);
  result = calcular(base, expoente);
  printf("%d ^ %d = %d", base, expoente, result);
  
}

int calcular(int b, int e){

	if(e > 0){

		return b * calcular(b, e - 1);

	}else{

		return 1;

	}

}
