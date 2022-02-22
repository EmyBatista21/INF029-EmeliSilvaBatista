#include <stdio.h>
/*Crie um programa que tenha uma função soma e a função main. 
A função main deve ler dois valores, enviar para a função soma. 
A função soma deve realizar a soma e retornar o valor.
A Função main deve imprimir o resultado da soma.
*/
int main()
{
    int a, b, resultado;
    printf("Insira dois valores: ");
    scanf("%d %d", &a, &b);
    resultado = soma(a, b); 
    printf("%d + %d = %d", a, b, resultado);
    return 0;
}

int soma(int x, int y){
    int result; 
    result = x + y;
    return result; 
}