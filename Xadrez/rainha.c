
#include <stdio.h>

int main()
{
    int esq = 0;
    
    for (esq = 1; esq <= 5; esq ++) 
    {
        printf("Movimento [%d], a rainha andou uma casa para a esquerda. \n", esq);
    }

    printf("A Rainha andou [%d] casas para a esquerda. \n", esq - 1);
    
    
    return 0;
}
