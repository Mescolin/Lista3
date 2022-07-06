/**
Defina  uma  operação  na  lista  sequencial  circular  para  exibir  o  conteúdo  da  lista  n 
vezes,  dando  n  voltas  na  lista.  A  operação  de  dar  voltas  na  lista  não  deve  ser  implementada 
executando  a  operação  exibir  existente  várias  vezes,  mas  sim,  percorrendo  a  lista  de  maneira 
circular n vezes. 
Sugestão  de  protótipo  da  função:  void  exibir_n_vezes_lc(lista*  l,  int  n).  Segue  um 
exemplo de execução: 
conteúdo de l1: 1 2 3 4 --> lista antes da execução da operação 
1 2 3 4 1 2 3 4 1 2 3 4 --> resultado exibido para n igual a 3
    @author Daneil Mescolin
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista_circular.h"

int main()
{
    int i,p;
    srand(time(NULL));

    lista *l1 = criar_lc(4);
    if (l1 == NULL)
    {
    printf("Erro na criacao da lista\n");
    }
     else
    {
    printf("Lista criada com sucesso!\n");
    }

    for (i = 0; i < 4; i++)
    {
    inserir_lc(l1, 1 + rand() % 5);
    }

    exibir_lc(l1);
    printf("\n");
    exibir_n_vezes_lc(l1, 3);
    
    return 0;
}
