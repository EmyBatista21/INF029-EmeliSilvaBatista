#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que imprima o seu nome, sua matrícula, e o seu semestre de ingresso no curso. 
Cada informação em uma linha.*/

void main(){
    setlocale(LC_ALL,"Portuguese"); 
    printf("Aluna(o) - Emeli Silva Batista\nMatrícula - 20212160052\nIngressou - 2021.2");
}