#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "ListaDuplamenteEncadeada.h"
using namespace std;
struct elemento
{
    int valor;
    struct elemento *ant;
    struct elemento *prox;
};

Elemento* cria_lista()
{
    return NULL;
}

void libera_lista(Elemento* li)
{
    if(li != NULL)
    {
        Elemento* aux = li;
        Elemento* rmv;
        while(aux != NULL)
        {
            rmv = aux->prox;
            free(aux);
            aux=rmv;
        }
    }
}
int tamanho_lista(Elemento* li)
{
    int cont = 0;
    Elemento* aux = li;
    while(aux->prox != NULL)
    {
        cont++;
        aux = aux -> prox;
    }
    cont ++;
    return cont;
}
int lista_vazia(Elemento* li)
{
    if(li == NULL)
    {
        return 1;
    }
    return 0;
}
void imprime_lista(Elemento* li)
{
    if(li == NULL)
    {
        cout<<"Lista vazia"<<endl;
    }
    Elemento* aux = li;
    while(aux!=NULL)
    {
        cout<<"Valor = "<<aux->valor<<endl;
        aux = aux->prox;
    }
}
Elemento* insere_lista_inicio(Elemento* li, int val)
{
    Elemento* novo;
    novo = (Elemento*) malloc(sizeof(Elemento));
    if(novo == NULL)
    {
        return li;
    }
    novo->valor = val;
    novo->prox = li;
    novo->ant = NULL;
    if(li!=NULL)
    {
        li->ant = novo;
    }
    li = novo;
    return li;
}
Elemento* remove_lista_inicio(Elemento* li)
{
    if(li == NULL)
    {
        cout<<"Lista vazia"<<endl;
        return li;
    }
    Elemento *no = li;
    li = no->prox;
    if(no->prox != NULL)
    {
        no->prox->ant = NULL;
    }
    free(no);
    return li;
}
Elemento* insere_lista_final(Elemento* li, int val)
{
    Elemento* novo;
    Elemento* aux;
    aux = li;
    novo = (Elemento*) malloc(sizeof(Elemento));
    if(novo == NULL)
    {
        return li;
    }
    else if(aux == NULL)
    {
        novo->valor = val;
        novo->prox = li;
        novo->ant = NULL;
        if(li!=NULL)
        {
            li->ant = novo;
        }
        li = novo;
        return li;
    }
    while(aux->prox!=NULL)
    {
        aux = aux->prox;
    }
    novo->valor = val;
    novo->prox = NULL;
    novo->ant = aux;
    if(li!=NULL)
    {
        aux->prox = novo;
    }
    //li = novo;
    return li;
}
Elemento* anula_Duplicidade(Elemento* li)
{
    int tamanho = tamanho_lista(li);// recebe o retorno de uma função que retorna o tamanho da lista;
    if(tamanho_lista(li)<3) //verifica se a lista tem pelo menos 3 itens;
    {
        return li;
    }
    Elemento* aux = li;//cria ponteiro aux que recebe o endereço da cabeça da lista li;
    Elemento* num = li;//cria ponteiro num que recebe o endereço da cabeça da lista li;
    while(num->prox!=NULL)
    {
        aux = num;
        while(aux->prox!=NULL)
        {
            while(aux->prox->valor==num->valor&&aux->prox->prox!=NULL)
            {
                Elemento* aux2 = aux;
                aux2->prox = aux2->prox->prox;
                aux2->prox->ant = aux2->prox->ant->ant;
            }
            if(aux->prox->valor==num->valor&&aux->prox->prox==NULL)
            {
                Elemento* aux2 = aux;
                aux2->prox->ant = NULL;
                aux2->prox = NULL;
            }
            if(aux->prox!=NULL)
                aux = aux->prox;
        }

        if(num->prox!=NULL)
            num = num->prox;
    }
    return li;
}
Elemento* anula_Duplicidade2(Elemento* li)
{
    int tamanho = tamanho_lista(li);// recebe o retorno de uma função que retorna o tamanho da lista;
    int cont = 0;//delara o contador cont e o iguala a 0;
    if(tamanho_lista(li)<3) //verifica se a lista tem pelo menos 3 itens;
    {
        return li;
    }
    Elemento* aux = li;//cria ponteiro aux que recebe o endereço da cabeça da lista li;
    Elemento* num = li;//cria ponteiro num que recebe o endereço da cabeça da lista li;
    /* A partir dessa linha são tratadas diferentes situações,foram criados dois ponteiros(num,aux),
     um para pegar o valor de referencia e outro para percorrer a lista, ao termino de cada ciclo
     de comparação o valor de referencia avança para o proximo, o contador é incrementado e aux = num,
      para que  a lista pode ter mais de um
     elemento repetido tanto no inicio no meio ou no final, para os elementos que se repetem
     no meio ou no inicio mais de duas vezes foi criado um while que se repete enquanto o prox
     elemento for igual o valor de referencia assegurando que não haja problemas com varias
     repetiçoes consecutivas*/
    while(num->prox!=NULL)
    {
        cont ++;
        aux = num;
        while(aux->prox!=NULL)
        {
            while(aux->prox->valor==num->valor)
            {
                if(cont<(tamanho-2))
                {
                    cont ++;
                    Elemento* aux2 = aux;
                    aux2->prox = aux2->prox->prox;
                    aux2->prox->ant = aux2->prox->ant->ant;
                }
                else if(aux->prox->valor==num->valor)
                {
                    Elemento* aux2 = aux;
                    aux2->prox->ant = NULL;
                    aux2->prox = NULL;
                    cout<<cont;
                }
            }
            //if(aux->prox->valor!=num->valor)
            if(aux->prox!=NULL)
                aux = aux->prox;    //    cont ++;
        }
        if(num->prox!=NULL)
            num = num->prox;

    }
    return li;

}

/*Elemento* anula_Duplicidade(Elemento* li)
{

}*/

Elemento* segmentaLista(Elemento* li, int n)
{
 Elemento* vetor[n];
 Elemento* aux = li;
 int cont = 0;
 while(cont < n){
 vetor[cont] = aux;
 //imprime_lista(vetor[n]);
 aux = aux->prox;
 cont ++;
 }
 aux = li;
 return vetor[0];
}


