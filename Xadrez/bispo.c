
#include <stdio.h>

int main()
{
    
    int esq = 0;
    int dir = 0;
    
    while(esq < 5)
    {
        printf("Movimento [%d] uma casa para a esquera. \n", esq + 1);
        printf("Movimento [%d] uma casa para cima. \n", esq + 1);
        

        esq ++;
    }
    
    printf("O Bispo andou %d casas na diagonal esquerda. \n", esq);
    

    return 0;
}
