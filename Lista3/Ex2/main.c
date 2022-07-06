/**
 *  Crie um programa no qual seja criada uma lista linear sequencial com capacidade 50.
    Insira  na  lista  50  valores  "aleatórios"  no  intervalo  [1, 15].  Utilize  a  operação  implementada  no
    exercício 1) para verificar quantas ocorrências dos valores 3, 8 e 15 existem na lista.
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
    inserir_fim_lst(l1, 1 + rand() % 15);
  }

  exibir_lst(l1);

  printf("\nO valor 3 foi exibido na lista: %d ", exibir_lista_int(l1, 3));
 
  printf("\nO valor 8 foi exibido na lista: %d ",exibir_lista_int(l1, 8));

  printf("\nO valor 15 foi exibido na lista: %d ",exibir_lista_int(l1, 15));

  return 0;
}