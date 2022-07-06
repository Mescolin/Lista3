/* 
     Defina  uma  operação  para  retornar  o  número  de  ocorrências  de  um  determinado 
    valor na lista linear sequencial. Use o protótipo  int buscar_qtde_lst(lista *l, int 
    valor), na qual o parâmetro valor indica o que se está buscando na lista e o retorno informa a 
    quantidade de itens com aquele valor na lista (para valores não encontrados na lista, o retorno 
    deve ser o valor 0).
    @author Daneil Mescolin
 */

#include <stdio.h>
#include "lista.h"


int main() {
    lista *l1 = criar_lst(10);
    if(l1 == NULL)
        printf("Erro na criacao da lista\n");
    else
        printf("Lista criada com sucesso!\n");


    int temp;
    temp = inserir_fim_lst(l1,1);
    temp = inserir_fim_lst(l1,2);
    temp = inserir_fim_lst(l1,3);
    temp = inserir_fim_lst(l1,4);
    temp = inserir_fim_lst(l1,1);
    temp = inserir_fim_lst(l1,2);
    temp = inserir_fim_lst(l1,5);
    temp = inserir_fim_lst(l1,6);

    exibir_lst(l1);

    int a;

    printf("\nDigite o valor que deseja procurar na lista: \n");
    scanf("%d",&a);
    
    printf("\nO valor inserido se repetiu : \n%d vezes", exibir_lista_int(l1,a));

    return 0;
}