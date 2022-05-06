#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*gcc main.c -o main -lm*/

void lerDados();
void imprimirDados(char marca[], char modelo[], int ano);
int main(){
  lerDados(); 
}

void lerDados(){
  char marca[10];
  char modelo[10];
  int ano; 
  printf("Insira os dados do veículo\n");
  printf("Marca: ");
  fgets(marca, 10, stdin);
  printf("Modelo: ");
  fgets(modelo, 10, stdin);
  printf("Ano: ");
  scanf("%d", &ano);
  imprimirDados(marca, modelo, ano); 
}

void imprimirDados(char marca[], char modelo[], int ano){
  system("clear"); 
  printf("DADOS DO VEÍCULO\n");
  printf("Marca: %s", marca);
  printf("Modelo: %s", modelo);
  printf("Ano: %d", ano);
}