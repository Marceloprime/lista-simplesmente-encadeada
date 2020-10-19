#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct elem{
    int num;
    char letra;
}ELEM;

typedef struct no{
    ELEM infor;
    struct no *prox;
}NO;

typedef NO* LISTA;



LISTA *cria_lista();
int lista_vazia(LISTA *l);
void libera_lista(LISTA *l);
void insere_no_inicio(LISTA *l, ELEM x);
void insere_no_meio(LISTA *l,ELEM x);
void insere_no_final(LISTA *l,ELEM x);
void impressao(LISTA *l);
int quantidade(LISTA *l);
int remocao(LISTA *l,ELEM x);

#endif // LISTA_H_INCLUDED
