#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

using namespace std;

int main()
{
   Lista* l;
   l = lst_cria();
   l = lst_insere(l, 23);
   l = lst_insere(l, 45);
   l = lst_insere(l, 50);
   l = lst_insere(l, 30);
   l = lst_insere(l, 10);
   cout<<"primeira impressao"<<endl;
   lst_imprime(l);
   l = lst_retira(l, 45);
   lst_libera(l);
   cout<<"Liberado"<<endl;
   lst_imprime(l);
}
