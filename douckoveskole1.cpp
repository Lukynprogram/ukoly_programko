#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cenabez, cenasdph;
    float rozhodnuti, vstup;
    do
    {
        printf("Zadej cenu bez dph: ");
        scanf("%f", &cenabez);
        printf("Zvol si jestli chces 1 - 10 procent nebo 2 - 12 procent: ");
        scanf("%f", &rozhodnuti);
        if (rozhodnuti == 1)
        {
            cenasdph = (cenabez / 100) * 110;
        }
        else if (rozhodnuti == 2)
        {
            cenasdph = (cenabez / 100) * 112;
        }
        else
        {
            printf("Zadal jsi spatnou hodnotu");
        }
        printf("Vase cena s dph je: %.2f Kc\n", cenasdph);
        printf("Prejete si pokracovat? 1 - ANO, 2 - NE: ");
        scanf("%f", &vstup);
        if (vstup == 0)
            break;
        else if (vstup == 1)
        {
            system("clear");
        }
        else if (vstup == 2)
            break;
        else
        {
            printf("Zadal jsi spatnou hodnotu \n");
            break;
        }

    } while (vstup != 0);
    printf("Dekuji za vyuziti meho programu. \n");
}
