#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ListaDuplamenteEncadeada.h"

using namespace std;

int main()
{
    Elemento* lista = cria_lista();
    int n = 9;
    lista = insere_lista_inicio(lista, 120);
    lista = insere_lista_inicio(lista, 120);
    lista = insere_lista_inicio(lista, 120);
    lista = insere_lista_inicio(lista, 13);
    lista = insere_lista_inicio(lista, 13);
    lista = insere_lista_inicio(lista, 60);
    lista = insere_lista_inicio(lista, 60);
    lista = insere_lista_inicio(lista, 60);
    lista = insere_lista_inicio(lista, 13);
    lista = insere_lista_inicio(lista, 60);
    lista = insere_lista_inicio(lista, 60);
    lista = insere_lista_inicio(lista, 13);
    lista = insere_lista_inicio(lista, 11);
    lista = insere_lista_inicio(lista, 80);
    lista = insere_lista_inicio(lista, 10);
    lista = insere_lista_inicio(lista, 10);
    lista = insere_lista_inicio(lista, 80);
    lista = insere_lista_inicio(lista, 80);
    lista = insere_lista_inicio(lista, 120);

    //lista = anula_Duplicidade(lista);
    Elemento* listas[n];
    listas[0] = segmentaLista(lista, n);
    imprime_lista(listas[0]);
    cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[1]);
    cout<<"\n"<<"###########"<<endl;
    //imprime_lista(listas[2]);
    /*cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[3]);
    cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[4]);
    cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[5]);
    cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[6]);
    cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[7]);
    cout<<"\n"<<"###########"<<endl;
    imprime_lista(listas[8]);
    cout<<"\n"<<"###########"<<endl;
    */

    //imprime_lista(lista);
}
