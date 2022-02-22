#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. 
Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma 
retornar para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o 
fatorial dele, ou se não é possível calcular o fatorial.
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, result;
    printf("Insira um número: ");
    scanf("%d", &numero); 
    result = fat(numero); 
    if(result > 0){
        printf("O fatorial de %d = %d", numero, result);
    } else
        printf("Não é possível calcular o fatorial de %d", numero); 
    return 0; 
}

int fat(int num){
    int i, fatorial;
    fatorial = num;
    for(i = 0; i <= num; i++){
        if(num > 1){
        fatorial = fatorial * (num - 1);
        num--;
        } else
            fatorial = 0; 
    }
    return fatorial; 
}