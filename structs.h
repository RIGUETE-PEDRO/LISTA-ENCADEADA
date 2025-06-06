

typedef struct item Item;
typedef struct celula Celula;
typedef struct lista Lista;

struct item {
    int id;
    char* nome;
    char* descricao;
    float preco;
};

struct celula {
    Celula *ant;
    Celula *prox;
    Item *item;
};

struct lista {
    Celula *prim;
    Celula *ult;
};

