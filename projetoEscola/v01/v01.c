#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define tamAlunos 10

typedef struct cadastroAluno
    {
        char nome[50];
        char cpf[16];
        char dataNascimento[11];
        char sexo;
        char matricula[15];

    } aluno;
aluno cadastroAlunos[tamAlunos];

int main(){
    setlocale(LC_ALL,"Portuguese"); 
    int opcao, i;
    opcao = 1; 
    i = 0;
    do{
        system("cls || clear");
        opcao = menuPrincipal();
        switch (opcao)
        {
        case 0:
            printf("Encerrando o programa..."); 
            break;
        
        case 1:
            cadastroAluno(i);
            i++; 
            break;
        
        case 2:
            listandoAlunos(i); 
            break;
        default:
            printf("Erro no programa"); 
            break;
        }
    }while(opcao != 0); 
}

int menuPrincipal(){
    int opcao; 
    printf("INSIRA A OPÇÃO DESEJADA\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Listar Aluno\n"); 
    printf("0 - Sair\n");
    scanf("%d", &opcao);
    getchar();  
    system("cls || clear");
    return opcao;
}
int cadastroAluno(int i)
{
    //Cadastro de Alunos (Matrícula, Nome, Sexo, Data Nascimento, CPF)
        printf("==============================\n");
        printf("||Cadastro do(a) %d° aluno(a)||\n", i + 1);
        printf("==============================\n");
        printf("\n");
        printf("Nome do aluno: ");
        fgets(cadastroAlunos[i].nome, 50, stdin);
        printf("Número de matrícula do aluno: ");
        fgets(cadastroAlunos[i].matricula, 15, stdin);
        printf("CPF do aluno: ");
        fgets(cadastroAlunos[i].cpf, 16, stdin);
        printf("Sexo do aluno: ");
        scanf("%c", &cadastroAlunos[i].sexo);
        getchar();
        printf("Data de nascimento do aluno: ");
        fgets(cadastroAlunos[i].dataNascimento, 11, stdin);
        getchar();
    
    system("cls || clear");
    return i; 
    
}
int listandoAlunos(int i){
    int j; 
    printf("======================\n");
    printf("||Alunos cadastrados||\n", i + 1);
    printf("======================\n");
    for (j = 0; j < i; j++){
        printf("\n");
        printf("Nome do aluno: %s", cadastroAlunos[j].nome);
        printf("Número de matrícula do aluno: %s", cadastroAlunos[j].matricula);
        printf("CPF do aluno: %s", cadastroAlunos[j].cpf);
        printf("Sexo do aluno: %c\n", cadastroAlunos[j].sexo);
        printf("Data de nascimento do aluno: %s\n", cadastroAlunos[j].dataNascimento);
        printf("=======================================");
    }
    printf("\n");
    printf("Pressione para voltar...");
    getchar(); 
    system("cls || clear");
}