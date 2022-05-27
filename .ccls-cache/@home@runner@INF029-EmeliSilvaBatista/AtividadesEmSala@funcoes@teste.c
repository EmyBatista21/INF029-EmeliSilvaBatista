#include <stdio.h>
void lerDados(char marca[], char modelo[], int *ano); 
int main(){
  int ano = 50;
  char marca[10]; 
  char modelo[10];
  lerDados(marca, modelo, &ano);
  printf("O ano eh: %d", ano); 
  printf("A marca eh: %s", marca); 
}

void lerDados(char marca[], char modelo[], int *ano){
  printf("Digite o ano: ");
  scanf("%d", ano); 
  printf("Digite a marca");
  scanf("%s", marca); 
  printf("Digite o modelo");
  scanf("%s", modelo); 
}
//gcc teste.c -o teste