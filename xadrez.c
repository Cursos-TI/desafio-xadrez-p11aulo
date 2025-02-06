#include <stdio.h>


const int REI_MOVEL = 1;
const int RAINHA_MOVEL = 8;
const int TORRE_MOVEL = 8;
const int CAVALO_MOVEL = 2;
const int BISPO_MOVEL = 8;
const int PEAO_MOVEL = 2;


void moverBispo(int linhaInicial, int colunaInicial, int direcao) {
    int linhaAtual = linhaInicial;
    int colunaAtual = colunaInicial;

    for (int i = 0; i < BISPO_MOVEL; i++) {
        printf("Bispo está na posição (%d, %d)\n", linhaAtual, colunaAtual);

        if (direcao == 1) { 
            linhaAtual--;
            colunaAtual--;
        } else if (direcao == 2) { 
            linhaAtual--;
            colunaAtual++;
        } else if (direcao == 3) { 
            linhaAtual++;
            colunaAtual--;
        } else if (direcao == 4) { 
            linhaAtual++;
            colunaAtual++;
        }
    }
}


void moverTorre(int linhaInicial, int colunaInicial, int direcao) {
    int linhaAtual = linhaInicial;
    int colunaAtual = colunaInicial;

    for (int i = 0; i < TORRE_MOVEL; i++) {
        printf("Torre está na posição (%d, %d)\n", linhaAtual, colunaAtual);

        if (direcao == 1) { 
            colunaAtual++;
        } else if (direcao == 2) { 
            colunaAtual--;
        } else if (direcao == 3) { 
            linhaAtual--;
        } else if (direcao == 4) { 
            linhaAtual++;
        }
    }
}


void moverRainha(int linhaInicial, int colunaInicial, int direcao) {
    int linhaAtual = linhaInicial;
    int colunaAtual = colunaInicial;

    for (int i = 0; i < RAINHA_MOVEL; i++) {
        printf("Rainha está na posição (%d, %d)\n", linhaAtual, colunaAtual);

        if (direcao == 1) { 
            colunaAtual--;
        } else if (direcao == 2) { 
            colunaAtual++;
        } else if (direcao == 3) { 
            linhaAtual--;
        } else if (direcao == 4) {
            linhaAtual++;
        }
    }
}

int main() {
    int linhaInicial = 4;
    int colunaInicial = 4;
    int direcao = 1;

    moverBispo(linhaInicial, colunaInicial, direcao);
    moverTorre(linhaInicial, colunaInicial, direcao);
    moverRainha(linhaInicial, colunaInicial, direcao);

    return 0;
}