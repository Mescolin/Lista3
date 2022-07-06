/**
    Defina  uma  operação  para  alterar  cada  valor  par  presente  em  uma  lista  linear 
    encadeada para o número inteiro sucessor e cada valor ímpar para o inteiro antecessor. Crie 
    um programa para testar o perfeito funcionamento da operação.  Veja um exemplo de execução 
    abaixo:
    l1: 1 -2 3 4 -5 3 4 2 3 --> lista antes da execução da operação 
    l1: 0 -1 2 5 -6 2 5 3 2 --> após a execução da operação
    @author Daneil Mescolin
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista_enc.h"
#include <time.h>

int main()
{
    lista* l = criar_lst();
    int temp,i;

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

    for (i = 0; i < 8; i++)
    {
    inserir_fim_lst(l1, -5 + rand() % 5);
    }
    exibir_lst(l1);
    
    trocar_valor(l1);
    printf("\n\n");

    exibir_lst(l1);

    return 0;
}