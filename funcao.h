
void menu()
{
    puts("1-cadastrar produto");
    puts("2-exclusao de produto");
    puts("3-ordenação de produtos para listagem");
    puts("4-busca de produto");
    puts("0-encerrar programa");
}

// seletor de opcao//
void seletor_opcao(Item*item,Lista* lista,int opcao,int *id,char* nome,char* descricao,float* preco)
{

    switch (opcao)
    {
    case 1:
                *id = (*id)+1;
                printf("Digite o nome do produto: ");
                scanf(" %99[^\n]", nome);
                printf("Digite a descricao do produto: ");
                scanf(" %99[^\n]", descricao);
                printf("Digite o preco do produto: ");
                scanf(" %f", preco);
                item = criaItem(id,nome,descricao,preco);
                cadastrar(lista,item);
        break;
    case 2:
        excluir();
        break;
    case 3:
        ordenar();
        break;
    case 4:
        buscar();
        break;

    default:
        puts('opcao invalida');
        break;
    }
}
//cria a lista
void criar_estrutura(){
    Lista *lista = (Lista *)malloc(sizeof(lista));
    lista->prim = NULL;
    lista->ult = NULL;
    return lista;

};


//cadastra o item
void cadastrar(Lista* lista, Item* item){
    Celula* nova = (Celula *)malloc(sizeof(Celula));
 
    nova->item = item;
    nova->prox = NULL;
    nova->ant = lista->ult;
    
    if (lista->prim == NULL)
    {
        lista->prim = nova;
    }else{
        lista->ult->prox =nova;
    }
    lista->ult = nova;
    
}
//cria o item para voltar a função do switch e mandar cadastrar. 
Item* criaItem(int *id,char* nome,char* descricao,float *preco){
    Item* item = (Item*) malloc(sizeof(item));

    item->id= *id;
    item->nome = strdup(nome);
    item->descricao = strdup(descricao);
    item->preco = *preco;
    
    return item;
}
