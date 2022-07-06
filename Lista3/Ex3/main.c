/**
 *  Crie um programa onde é criada uma lista linear sequencial com capacidade 50. Insira 
    na lista 50 valores "aleatórios" no intervalo [1, 5]. Utilize a operação implementada no exercício 1) 
    para verificar quantas ocorrências dos valores 1 a 5  existem na lista. Apresente o resultado na 
    forma de um histograma para vermos a distribuição dos valores gerados. No exemplo de execução 
    abaixo foram gerados “aleatoriamente” 9 valores 1, 11 valores 2, 8 valores 3, 11 valores 4 e 11 
    valores 5. 
    @author Daneil Mescolin
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <time.h>

int main()
{

  int a, i;
  srand(time(NULL));

  lista *l1 = criar_lst(50);
  if (l1 == NULL)
  {
    printf("Erro na criacao da lista\n");
  }
  else
  {
    printf("Lista criada com sucesso!\n");
  }

  for (i = 0; i < 50; i++)
  {
    inserir_fim_lst(l1, 1 + rand() % 5);
  }

    exibir_lst(l1);
    
    //começar o histograma
    //valor 1
    printf("\n\n1: ");
    for (i=0; i<exibir_lista_int(l1,1);i++)
  {
    printf("* ");
  }
    //valor 2
      printf("\n2: ");
    for (i=0; i<exibir_lista_int(l1,2);i++)
  {
    printf("* ");
  }

    //valor 3
      printf("\n3: ");
    for (i=0; i<exibir_lista_int(l1,3);i++)
  {
    printf("* ");
  }

    //valor 4
      printf("\n4: ");
    for (i=0; i<exibir_lista_int(l1,4);i++)
  {
    printf("* ");
  }

    //valor 5
      printf("\n5: ");
    for (i=0; i<exibir_lista_int(l1,5);i++)
  {
    printf("* ");
  }

  return 0;
}