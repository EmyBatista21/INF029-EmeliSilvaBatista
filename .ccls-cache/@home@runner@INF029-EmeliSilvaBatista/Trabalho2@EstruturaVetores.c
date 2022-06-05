#include <stdio.h>
#include <stdlib.h>
#define TAM 10

// gcc mainTeste.c EstruturaVetores.c -o t2 -Wno-unused-result

#include "EstruturaVetores.h"

typedef struct elemento{
  int *aux;
  int tam;
  int qtd_elementos; 
}t_elemento;

t_elemento vetorPrincipal[TAM];

/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'

Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho deve ser maior ou igual a 1
*/



int criarEstruturaAuxiliar(int posicao, int tamanho)
{
    if(vetorPrincipal[posicao].aux != NULL){
      return JA_TEM_ESTRUTURA_AUXILIAR;
    }else if(posicao < 1 || posicao > 10){
      return POSICAO_INVALIDA;
    }else if(tamanho < 1){
      return TAMANHO_INVALIDO;
    }else{
      vetorPrincipal[posicao].aux = (int*)malloc(tamanho * sizeof(int)); 
      vetorPrincipal[posicao].tam = tamanho;
      vetorPrincipal[posicao].qtd_elementos = 0;
      return SUCESSO;
    }
    // a posicao pode já existir estrutura auxiliar
    // se posição é um valor válido {entre 1 e 10}
    // o tamanho ser muito grande
    // o tamanho nao pode ser menor que 1
    // deu tudo certo, crie
}

/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{
    if (posicao < 1 || posicao > 10)
        return POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (vetorPrincipal[posicao].aux != NULL)
        {
            if (vetorPrincipal[posicao].qtd_elementos < vetorPrincipal[posicao].tam)
            { 
              vetorPrincipal[posicao].aux[vetorPrincipal[posicao].qtd_elementos] = valor;
              vetorPrincipal[posicao].qtd_elementos++;
              return SUCESSO;
            }
            else
            {
        
              return SEM_ESPACO;
            }
        }
        else
        {
            return SEM_ESTRUTURA_AUXILIAR;
        }
    }

}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica

Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)
{
    // Decrementar o tamanho da estrutura
    if(posicao < 1 || posicao > 10){
      return POSICAO_INVALIDA;
    }else{
      if(vetorPrincipal[posicao].aux != NULL){
        if(vetorPrincipal[posicao].qtd_elementos > 0){
          vetorPrincipal[posicao].qtd_elementos--;
          return SUCESSO;
        }else{
          return ESTRUTURA_AUXILIAR_VAZIA;
        }
      }else{
        return SEM_ESTRUTURA_AUXILIAR;
      }
    }
    // Exclui o ultimo elemento
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar

*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
    // Decrementar a posição dos elementos a partir da posição do número procurado.
  int retorno;
  int i, achei; 
  if(posicao < 1 || posicao > 10){
      retorno = POSICAO_INVALIDA;
    }else{
      if(vetorPrincipal[posicao].aux != NULL){
        if(vetorPrincipal[posicao].qtd_elementos > 0){
          for(i = 0, achei = 0; i < vetorPrincipal[posicao].qtd_elementos && achei == 0; i++){
            if(vetorPrincipal[posicao].aux[i] == valor){
              for(; i < vetorPrincipal[posicao].qtd_elementos; i++){
                vetorPrincipal[posicao].aux[i] = vetorPrincipal[posicao].aux[i + 1]; 
              }
              vetorPrincipal[posicao].qtd_elementos--; 
              achei = 1; 
              retorno = SUCESSO;
            }else{
              retorno = NUMERO_INEXISTENTE; 
            }
          }
        }else{
          retorno = ESTRUTURA_AUXILIAR_VAZIA;
        }
      }else{
        retorno = SEM_ESTRUTURA_AUXILIAR;
      }
    }
  return retorno; 
}


// se posição é um valor válido {entre 1 e 10}
/*int ehPosicaoValida(int posicao)
{
    int retorno = 0;
    if (posicao < 1 || posicao > 10)
    {
        retorno = POSICAO_INVALIDA;
    }
    else
        retorno = SUCESSO;

    return retorno;
}*/
/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
  int i, retorno;
  if(posicao < 1 || posicao > 10){
    //Se a posição for invalida 
    retorno = POSICAO_INVALIDA;
  }else{
    if(vetorPrincipal[posicao].aux == NULL){
      // Se não existir estrutura auxiliar
      retorno = SEM_ESTRUTURA_AUXILIAR;
    }else{
      // Se existir estrutura auxiliar
      if(vetorPrincipal[posicao].qtd_elementos > 0){
        for(i = 0; i < vetorPrincipal[posicao].qtd_elementos; i++){
          vetorAux[i] = vetorPrincipal[posicao].aux[i]; 
        }
      retorno = SUCESSO; 
      }
    }
  }
  return retorno; 
}


/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
  int retorno, iCont, jCont, aux; 
    if(posicao < 1 || posicao > 10){
        retorno = POSICAO_INVALIDA; 
    }else{
      if(vetorPrincipal[posicao].aux == NULL){
        retorno = SEM_ESTRUTURA_AUXILIAR;
      }else{
        if(vetorPrincipal[posicao].aux > 0){
          for(iCont = 0; iCont < vetorPrincipal[posicao].qtd_elementos; iCont++){
            vetorAux[iCont] = vetorPrincipal[posicao].aux[iCont]; 
          }
          for(iCont = 0; iCont < vetorPrincipal[posicao].qtd_elementos ; iCont++){
            for(jCont = iCont + 1; vetorPrincipal[posicao].aux[jCont] < vetorPrincipal[posicao].qtd_elementos; jCont++){
              if(vetorAux[jCont] < vetorAux[iCont]){
                aux = vetorAux[jCont];
                vetorAux[jCont] = vetorAux[iCont];
                vetorAux[iCont] = aux;
              } 
            }
          }
        }
          retorno = SUCESSO;
      }
    }
  return retorno; 
}



/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{
    int retorno = 0;
    int iCont, jCont, auxCont;
    for(iCont = 0; iCont < TAM; iCont++){
      if(vetorPrincipal[iCont].aux != NULL){
        if(vetorPrincipal[iCont].qtd_elementos > 0){
          for(jCont = 0; jCont < vetorPrincipal[iCont].qtd_elementos; jCont++){
            vetorAux[auxCont] = vetorPrincipal[iCont].aux[jCont];
            auxCont++; 
          } 
        }
      }
      if(auxCont < 1){
        retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
      }else{
        retorno = SUCESSO; 
      }
    }
    return retorno;
}

/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

  int i, auxiliar, cont = 0;
  int j, retorno = 0;
  
  for (i = 0; i<TAM; i++){

    if (vetorPrincipal[i].aux != NULL){
      
      if (vetorPrincipal[i].qtd_elementos > 0){
       // for para fazer o vetor auxiliar assumir os valores
        for (j = 0; j < vetorPrincipal[i].qtd_elementos; j++){
          vetorAux[cont] = vetorPrincipal[i].aux[j];
          cont++;
        }
      }
    }
      
  }

  if (cont>0){
    for (i = 0; i < cont; i++){
      for (j = i + 1; j < cont; j++){
        if (vetorAux[i] > vetorAux[j]){
          auxiliar = vetorAux[i];
          vetorAux[i] = vetorAux[j];
          vetorAux[j] = auxiliar;
        }
      }
    }
  }
  
  if (cont > 0)
    retorno = SUCESSO;
  else
    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

  return retorno;
}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1

Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{
    // Realocar memória 
    int retorno = 0;
    novoTamanho = novoTamanho + vetorPrincipal[posicao].tam;
    // Se a posição for invalida
    if(posicao < 1 || posicao > 10){
      retorno = POSICAO_INVALIDA;
    }else{
      // Se o tamanho for invalido
      if(novoTamanho < 1){
        retorno = NOVO_TAMANHO_INVALIDO;  
      }else{
        // Se não existir estrutura auxiliar
        if(vetorPrincipal[posicao].aux == NULL){
          retorno = SEM_ESTRUTURA_AUXILIAR;
        }else{
          vetorPrincipal[posicao].aux = realloc(vetorPrincipal[posicao].aux, (novoTamanho + vetorPrincipal[posicao].tam) * sizeof(int));
          if(!vetorPrincipal[posicao].aux){
            retorno = SEM_ESPACO_DE_MEMORIA;
          }else{
            vetorPrincipal[posicao].tam = novoTamanho;
            if(vetorPrincipal[posicao].tam < vetorPrincipal[posicao].qtd_elementos){
              vetorPrincipal[posicao].qtd_elementos = vetorPrincipal[posicao].tam;
            }
            retorno = SUCESSO;
          }
        }
      }
    } 
    return retorno;
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.

Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/



int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{

    int retorno = 0; 
    if(posicao < 1 || posicao > 10){
      retorno = POSICAO_INVALIDA;
    }else{
      if(vetorPrincipal[posicao].aux == NULL){
        retorno = SEM_ESTRUTURA_AUXILIAR;
      }else{
        if(vetorPrincipal[posicao].qtd_elementos < 1){
          retorno = ESTRUTURA_AUXILIAR_VAZIA;
        }else{
          if(vetorPrincipal[posicao].tam < vetorPrincipal[posicao].qtd_elementos){
            vetorPrincipal[posicao].qtd_elementos = vetorPrincipal[posicao].tam;
          }
          retorno = vetorPrincipal[posicao].qtd_elementos; 
        }
      }
    }

    return retorno;
}

/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.

Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/

No* criarElemento(int valor){
	No *novo = (No *)malloc(sizeof(No));
	if(novo == NULL){
        printf("Falta Memoria\n");
        exit(1);
	}
	novo->conteudo = valor;
	novo->prox = NULL;
	return novo;
}

void inserirNoFinalComCabecote(No *inicio, int val){

	No* tmp;
	No* novo = criarElemento(val);

	if(inicio->prox == NULL){
		inicio->prox = novo;
	}
	else{
		tmp = inicio->prox;

		while(tmp->prox != NULL)
			tmp = tmp->prox;

		tmp->prox = novo;
	}
}


No *montarListaEncadeadaComCabecote()
{
  int iCont, jCont;
  int retorno, contador;
  No *cabecote = (No*) malloc(sizeof(No));  
  
  
  for (iCont = 0; iCont < TAM; iCont++){
    if (vetorPrincipal[iCont].aux != NULL){
      if (vetorPrincipal[iCont].qtd_elementos > 0){
        contador++;
        for (jCont = 0; jCont < vetorPrincipal[iCont].qtd_elementos; jCont++)
        {
          inserirNoFinalComCabecote(cabecote, vetorPrincipal[iCont].aux[jCont]); 
        }
      }
    }
      
  }

  if (contador > 0)
    return cabecote;
  else
    return NULL;
}

/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
  No *p;
  int index = 0;
  for (p = inicio->prox; p != NULL; p = p->prox)
    vetorAux[index++] = p->conteudo;
}

/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.

Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
  No* atual = *inicio;
	No* tmp;

	while(atual != NULL){
		tmp = atual->prox;
		free(atual);
		atual = tmp;
	}

  *inicio = NULL;
}

/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 

*/

void inicializar()
{
  int i;
  for(i = 0; i < TAM; i++){
    vetorPrincipal[i].aux = NULL;
  }
}

/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.

*/

void finalizar()
{
  int iCont; 
  for(iCont = 0; iCont < TAM; iCont++){
    if(vetorPrincipal[iCont].aux != NULL){
      free(vetorPrincipal[iCont].aux);
    }
  }
}
