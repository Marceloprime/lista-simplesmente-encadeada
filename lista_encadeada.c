#include "lista.h"

LISTA *cria_lista(){
    LISTA *l;
    l = (LISTA*) malloc (sizeof(LISTA));

    if(l != NULL){
        *l = NULL;//Eh preenchido o conteudo do ponteiro com NULL;
    }

    return l;
}

int lista_vazia(LISTA *l){
    if((*l) == NULL){
        return 1;
    }
    else if(l == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int remocao(LISTA *l,ELEM x){
    NO *ant, *aux = (*l);
    if(lista_vazia == 1){
        return 0;
    }

    while(aux != NULL && aux->infor.num != x.num){
        ant = aux;
        aux = aux->prox;
    }
    if(aux == NULL){
        return 0;
    }

    if(aux == (*l)){
        (*l) = aux->prox;
    }

    else{
        ant->prox = aux->prox;
        free(aux);
    }
    return 1;
}

void libera_lista(LISTA *l){
    NO *aux = *l;

    while((*l) != NULL){
        aux = (*l);
        (*l) = (*l)->prox;
        free(aux);
    }
    free(l);
    return;
}

void insere_no_inicio(LISTA *l, ELEM x){
    if(lista_vazia == 1){
        (*l)->infor = x;
        (*l)->prox = NULL;
    }

    else{
        NO *bloco;
        bloco = (NO*) malloc (sizeof(NO));

        bloco->infor = x;
        bloco->prox = NULL;

       bloco->prox = (*l);
       (*l) = bloco;
    }

}

void insere_no_meio(LISTA *l, ELEM x){
      if(quantidade(l) == 0){
        (*l)->infor = x;
        (*l)->prox = NULL;
    }

    else{
            printf("oi");
        NO *bloco;
        bloco = (NO*) malloc (sizeof(NO));

        bloco->infor = x;
        bloco->prox = NULL;

        NO *ant,*aux = (*l);
        while(aux->prox != NULL && aux->infor.num < bloco->infor.num){
            ant = aux;
            aux = aux->prox;
        }
        bloco->prox = ant->prox;
        ant->prox = bloco;
    }
}

void insere_no_final(LISTA *l,ELEM x){
     if(quantidade(l) == 0){
        (*l)->infor = x;
        (*l)->prox = NULL;
    }
    else{
        NO *bloco;
        bloco = (NO*) malloc (sizeof(NO));
        bloco->infor = x;
        bloco->prox = NULL;
        NO *aux = (*l);
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = bloco;
    }
}

int quantidade(LISTA *l){
    int i = 0;

    if((int)lista_vazia == 1){
        return i;
    }

    NO *aux = (*l);
    while(aux->prox != NULL){
        i++;
        aux = aux->prox;
    }

    return i;
}


void impressao(LISTA *l){
    NO *aux = (*l);
    aux = aux->prox;
    while(aux != NULL){
        printf("%d %c\n",aux->infor.num,aux->infor.letra);
        aux = aux->prox;
    }
}
