#include "lista.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    LISTA *l;
    ELEM x;
    int opcao;
    l = cria_lista();

    printf("Digite:\n");
    printf("1 para Lista com insercao inicio\n");
    printf("2 para Lista com insercao ordenada\n");
    printf("3 para Lista com insercao Fim\n");
    printf("4 para impressao\n");
    printf("5 para quantidade\n");
    printf("6 para libera Lista\n");
    printf("7 para remocao\n");
    printf("8 para sai\n");

    scanf("%d",&opcao);
    while(opcao != 8){
        if(opcao == 1){
            for(int i=0;i<10;i++){
                x.num = i;
                x.letra = i+65;
                insere_no_inicio(l,x);
            }

        }

        else if(opcao == 2){
            for(int i=0;i<10;i++){
                x.num = i;
                x.letra = (i%3)+65;
                insere_no_meio(l,x);
             }

        }

        else if(opcao == 3){
            for(int i=0;i<10;i++){
                x.num = i;
                x.letra = i+65;
                insere_no_final(l,x);
            }

        }

        else if(opcao == 4){
               impressao(l);
        }

        else if(opcao == 5){
            printf("%d\n", quantidade(l));
        }

        else if(opcao == 6){
            //libera_lista(l);
        }

        else if(opcao == 7){
            for(int i=0;i<10;i++){
                x.num = (i%2);
                x.letra = (i%2)+65;
                remocao(l,x);
            }
        }

        printf("Nova opcao:\n");
        scanf("%d",&opcao);
    }

    return 0;
}
