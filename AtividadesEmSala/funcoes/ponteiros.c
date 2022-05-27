#include <stdio.h>
#include <stdlib.h>

/*gcc ponteiros.c -o ponteiros -Wno-unused-result*/

//void lerDados(char marca, char modelo, int *ano);
void lerDados(char *marca, char *modelo, int *ano); 
void imprimirDados(char *marca, char *modelo, int *ano); 
int main(){
  char marca[10];
  char modelo[10];
  int ano; 
  lerDados(marca, modelo, &ano); 
  imprimirDados(marca, modelo, &ano);
}

void lerDados(char *marca, char *modelo, int *ano){
   
  printf("Insira os dados do veículo\n");
  printf("Marca: ");
  fgets(marca, 10, stdin);
  printf("Modelo: ");
  fgets(modelo, 10, stdin);
  printf("Ano: ");
  scanf("%d", ano);
   
}

void imprimirDados(char *marca, char *modelo, int *ano){
  system("clear"); 
  printf("DADOS DO VEÍCULO\n");
  printf("Marca: %s", marca);
  printf("Modelo: %s", modelo);
  printf("Ano: %d", *ano);
}