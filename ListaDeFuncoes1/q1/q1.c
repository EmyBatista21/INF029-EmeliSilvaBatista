#include <stdio.h>
/*Crie um programa que tenha uma função soma e a função main. 
A função main deve ler dois valores, enviar para a função soma. 
A função soma deve realizar a soma e retornar o valor.
A Função main deve imprimir o resultado da soma.
*/
int main()
{
    int a, b, resultado;
    //Pedindo ao usuário para entrar com os valores
    printf("Insira dois valores: ");
    scanf("%d %d", &a, &b);
    //Passando os dados digitados para a função soma e atribuindo o retorno para a variável resultado
    resultado = soma(a, b); 
    printf("%d + %d = %d", a, b, resultado);
    return 0;
}

int soma(int x, int y){
    int result;
    //Somando os valores digitados na função main 
    result = x + y;
    //Retornando o resultado para a função main
    return result; 
}