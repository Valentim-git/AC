#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "time.h"



void randomColor (char codSecreto[4][10]) {

    int gerarCor;
    for (int i = 0; i < 4; i++) {
        gerarCor = 1 + rand() % 6;
        switch (gerarCor) {
            case 1:
                strcpy(codSecreto[i], "B");
                break;
            case 2:
                strcpy(codSecreto[i], "G");
                break;
            case 3:
                strcpy(codSecreto[i], "R");
                break;
            case 4:
                strcpy(codSecreto[i], "Y");
                break;
            case 5:
                strcpy(codSecreto[i], "W");
                break;
            case 6:
                strcpy(codSecreto[i], "O");
                break;
        }
    }
}

void advinharCombinacao (char advinharCod[4][10]) {

    printf("Introduza a Sequencia: \n");
    for (int i = 0; i < 4; i++) {
        scanf("%s", advinharCod[i]);
    }
}

void verificarCombinacao (char codSecreto[4][10], char advinharCod[4][10]) {

    int pinPreto = 0, pinBranco = 0;
    for (int i = 0; i < 4; i++) {
        // se estiver certo incrementar pinPreto
        if (strcmp(advinharCod[i], codSecreto[i]) == 0) {
            pinPreto++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // se estiver certo mas em posição difrente incrementar pinBranco
            if(strcmp(codSecreto[i], advinharCod[j]) == 0) {
                pinBranco++;
            }
        }
    }
}


int main() {
    srand(time(NULL));

    return 0;
}