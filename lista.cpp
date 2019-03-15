#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct lista
{
    int info;
    struct lista *prox;
};
//descomentartypedef struct lista Lista;
//criar lista vazia
Lista* lst_cria(void)
{
    return NULL;
}
Lista* lst_insere(Lista *l, int i)
{
    Lista* novo = new Lista;
    novo->info = i;
    novo->prox = l;
    return novo;
}

//Lista* lst_insere_ordenado(Lia)

void lst_imprime(Lista* l)
{
    Lista* p;
    for(p=l; p!= NULL; p=p->prox){
        printf("info = %d\n", p->info);
    }
}
//Verificar se a lista esta vazia
int lst_vazia(Lista* l)
{
    return (1 == NULL);
}
//funcao de busca
Lista* lst_busca(Lista* l, int v)
{
    Lista* p;
    for(p=l; p!=NULL; p=p->prox){
        if(p->info == v)
            {
                printf("encontrado");
                return p;
            }
    }
    return NULL;
}
//funcao que retira um elemento
Lista* lst_retira(Lista* l, int v)
{
    Lista* ant = NULL;
    Lista* p = l;
    while(p != NULL & p->info != v)
        {
            ant = p;
            p = p->prox;
        }
        //verifica se achou o elemento
        if(p == NULL)
            return l;
        //retira o elemento
        if(p == NULL)
            l = p->prox;//retira elemento do inicio
        else
            ant->prox = p->prox;//retira o elemento final
            free(p);
            return l;
}

//funcao para liberar a Lista
void lst_libera(Lista* l)
{
    Lista* p = l;
    Lista* tmp;
    while(p != NULL)
        {
            tmp = p->prox;
            delete p;
            p=tmp;
        }
}
