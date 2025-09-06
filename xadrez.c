#include <stdio.h>

int main() {

    //TORRE
    for (int i = 1; i <= 5; i++)
    {
        printf("A torre se moveu para direita %d vez(es). \n", i);
    }
    
    //BISPO
    int i = 1;
    do
    {
        printf("O bispo se moveu para cima e direita %d vez(es)\n", i);
        i++;
    } while ( i <= 5);
    

    //RAINHA

    int y = 1;
    while (y <= 8) {        
        printf("A rainha se moveu %d vezes para esquerda \n", y);
        y++;
    }
}




// DESAFIO AVENTUREIRO

#include <stdio.h>

int main() {

    //TORRE
    for (int i = 1; i <= 5; i++)
    {
        printf("A torre se moveu para direita %d vez(es). \n", i);
        
    }
    printf("\n");
    //BISPO
    int i = 1;
    do
    {
        printf("O bispo se moveu para cima e direita %d vez(es)\n", i);
        i++;
        
    } while ( i <= 5);
    printf("\n");

    //RAINHA

    int y = 1;
    while (y <= 8) {        
        printf("A rainha se moveu %d vez(es) para esquerda \n", y);
        y++;
        
    }
    printf("\n");

    //CAVALO
    for ( i = 1; i <= 2; i++)
        printf("O cavalo moveu %d vez(es) para baixo\n", i);
        int j = 1;
        do
        {
            printf("O cavalo moveu %d vez(es) para esquerda\n", j);
            j++;
            printf("\n");
        } while (j == 1);
    
}
