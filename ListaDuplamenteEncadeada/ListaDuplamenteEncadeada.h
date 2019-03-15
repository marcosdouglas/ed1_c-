#ifndef LISTADUPLAMENTEENCADEADA_H_INCLUDED
#define LISTADUPLAMENTEENCADEADA_H_INCLUDED
typedef struct elemento Elemento;
Elemento* cria_lista();
void libera_lista(Elemento* li);
Elemento* insere_lista_inicio(Elemento* li, int valor);
Elemento* remove_lista_inicio(Elemento* li);
int tamanho_lista(Elemento* li);
int lista_vazia(Elemento* li);
void imprime_lista(Elemento* li);
Elemento* insere_lista_final(Elemento* li, int val);
Elemento* anula_Duplicidade(Elemento* li);
Elemento* anula_Duplicidade2(Elemento* li);
Elemento* segmentaLista(Elemento* li, int n);
#endif // LISTADUPLAMENTEENCADEADA_H_INCLUDED
