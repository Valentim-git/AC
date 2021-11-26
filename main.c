#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "time.h"

void gerarCodigo(int codSecreto[]){
    for (int i = 0; i < 4; i++) {//gera os numeros aleatórios
        codSecreto[i] = 0 + rand() % 6;
    }
}
void printAleatorios(int codSecreto[]){
    for (int i = 0; i < 4; ++i) {//imprime os numeros aleatorios
        printf("%d", codSecreto[i]);
    }
    printf("\n");
}

void imprimir_matriz(char matriz[]){
    int posicao = 0;
    printf("%s\n",matriz);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%c",matriz[posicao]);
            printf("  ");
            posicao ++;
        }
        printf("\n");
    }
}
void contador(char matriz[]){
    int contador= strlen(matriz);
    printf("tem %d ",contador);
}
void jogadafunct(char matriz[],int jogada){
    printf("Pode dar uma combinação de 4 letas BGRYWO\n");
    //scanf("%c %c %c %c\n",&matriz[jogada],&matriz[jogada+1],&matriz[jogada+2],&matriz[jogada+3]);
    scanf("%c",&matriz[jogada]);
    scanf("%c",&matriz[jogada+1]);
    scanf("%c",&matriz[jogada+2]);
    scanf("%c",&matriz[jogada+3]);
    jogada=jogada+4;
    imprimir_matriz(matriz);
}

void jogo(char matriz[],int jogada){
    while(jogada!=40){
        jogadafunct(matriz,jogada);
    }
}

//int verificarConbinacao(char matriz[],int jogada,int codSecreto[]){}
//int CCPC (){//CORES CERTAS POSIÇÃO CERTA}
//int CCPE(){//CORES CERTAS POSIÇÃO ERRADA}


int main() {
    int jogada=0;
    char matriz[41]={"0000000000000000000000000000000000000000"};
    char code[]="BGRYWO";
    int codSecreto[4];//tem o codigo mas em numeros que precisa traduzir para letras
    //char cod_Secreto[4];//tem o codigo dos numeros ja traduzido em letras
    srand(time(NULL));

    gerarCodigo(codSecreto);
    //printAleatorios(codSecreto);
    //traduz(codSecreto,code);
    //imprimir_matriz(matriz);
    //contador(matriz);
    jogadafunct(matriz,jogada);
    //verificarConbinacao(matriz,jogada,codSecreto);



    //printf("Vamos adivinhar a sequencia!\n");
    //printf("As letas sao \n---BGRYWO--- \nIndique 4 letras ");
    //printf("%c %c %c %c \n",matriz[jogada],matriz[jogada+1],matriz[jogada+2],matriz[jogada+3]);


    return 0;
}