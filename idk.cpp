#include <stdio.h>
//je dana posloupnost kladnych cisel predstavujici znamky konec nula, kolik jednicek a kolik petek.
int main()
{
    int cislo = 1;
    int jednicka = 0;
    int petka = 0;

        while (cislo != 0)
        {
            if (cislo <= 5 && cislo >= 1)
            {
                if (cislo == 1)
                {
                    jednicka = jednicka + 1;
                }
                else if (cislo == 5)
                {
                    petka = petka + 1;
                }
                printf("Vloz znamku: {exit = 0}: ");
                scanf("%d", &cislo);
            }
            else
            {
                printf("Zadal jsi spatne cislo\n");
                break;
            }
        }
    
    printf("Pocet jednicek je: %d \n", jednicka);
    printf("Pocet petek je: %d\n", petka);
}
