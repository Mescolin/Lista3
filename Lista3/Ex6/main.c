/**
    Crie  uma  pilha  a  partir  da  implementação  de  lista  linear  encadeada  disponibilizada. 
    Implemente as seguintes operações: criar, inserir, remover, topo, liberar  e 
    esta_vazia. Crie um programa (cenário de testes) para mostrar o perfeito funcionamento da 
    pilha implementada. Todas as operações devem ser usadas pelo menos uma vez.
    @author Daneil Mescolin
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

int main()
{
    int temp,i;
    srand(time(NULL));

    lista *l1 = criar_lst();
    if (l1 == NULL)
    {
    printf("Erro na criacao da lista\n");
    }
     else
    {
    printf("Lista criada com sucesso!\n");
    }

    for(int i = 0; i<10; i++)
    {
        temp = inserir_fim_lst(l1, i);
    }
    exibir_lst(l1);

    for(int i = 0; i<10; i++)
    {
        temp = remover_fim_lst(l1);
    }
    
    //criar, inserir, remover, topo, liberar e esta_vazia

    printf("\n");
    
    exibir_lst(l1);

    liberar_lst(&l1);

    temp = topo(l1);

    if (esta_vazia_lst(l1) ==VERDADEIRO){
        printf("Esta vazia!");
    }
    else{
    printf("Nao esta vazia!");
    }

    return 0;
}