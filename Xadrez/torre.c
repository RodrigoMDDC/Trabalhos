
#include <stdio.h>

int main()
{
    int direcao = 0;
    
    do{
        printf("Movimento [%d], a torre andou uma casa para direita. \n", direcao + 1);
        direcao ++;
    }while(direcao < 5);
    
    printf("A Torre andou %d casas para a direita. \n", direcao);

    return 0;
}