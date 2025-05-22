#include <stdio.h>



int main()
{
    int L = 10;
    int C = 10;
    int N = 3;
    int tabuleiro[10][10];

   // Inicializando a matriz

    for (int x = 0; x < 10; x++){
        for (int y = 0; y < 10; y++){
            tabuleiro[x][y] = 0;
        }
    }

    // colocando os navios

    // Navio 01 HORIZONTAL

    int linha_inicial = 7;
    int coluna_inicial = 5;
    int tamanho = 3;

    if (coluna_inicial + tamanho <= 10) {
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha_inicial][coluna_inicial + i] = 3;
        }
    }else{
        printf("ERRO");
    }

    // Navio 02 HORIZONTAL

    linha_inicial = 8;
    coluna_inicial = 5;
    tamanho = 3;

    if (coluna_inicial + tamanho <= 10) {
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha_inicial][coluna_inicial + i] = 3;
        }
    }else{
        printf("ERRO");
    }

    // Navio 03 DIAGONAL

    linha_inicial = 0;
    coluna_inicial = 0;
    tamanho = 3;

    if (coluna_inicial + tamanho <= 10) {
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha_inicial + i][coluna_inicial + i] = 3;
        }
    }else{
        printf("ERRO");
    }

    // Navio 04 DIAGONAL

    linha_inicial = 9;
    coluna_inicial = 0;
    tamanho = 3;

    if (coluna_inicial + tamanho <= 10) {
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha_inicial - i][coluna_inicial + i] = 3;
        }
    }else{
        printf("ERRO");
    }

    printf("      =-= Jogo Batalha Naval =-=\n\n");
    printf("     ");
    for (int x = 0; x < 10; x++){
        printf("%2d ", x + 1);    
    }
    printf("\n");
    for (int x = 0; x < 10; x++){
        printf("%2d _ ", x + 1);
        for (int y = 0; y < 10; y++){
            printf("|%d ", tabuleiro[x][y]);
        }
            printf("\n");
    }

printf(" \n");

    return 0;
}