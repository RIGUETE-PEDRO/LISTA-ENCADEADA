#include "structs.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "prototipo.h"
#include "funcao.h"


int main(int argc, char const *argv[])
{

    int opcao = 0;
    Item* item;
    Lista* lista;
    int id = 0; 
    char nome[100];
    char descricao[200];
    float preco = 0;

    criar_estrutura();
    do{
        menu();
        seletor_opcao(lista,item,opcao,&id,&nome,&descricao,&preco);
    } while (opcao != 0);
    


    return 0;
}


