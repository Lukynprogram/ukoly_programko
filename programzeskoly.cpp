#include <stdio.h>
//Program: Je zadávána rada cíel ukoncená nulou, program vypíše prumer císel,
//pocet kladných zadaných císel a pocet záporných zadanýc císel. - pomocí cyklu do-while.

int main()
{
    float a;
    float kok = 0;
    float soucet = 0;
    float zapor = 0;
    float kladne = 0;
    float vysledek = 0;

    do
    {
        printf("Zadej cislo: ");
        scanf("%f", &a);

        soucet = soucet + a;
        kok += 1;

        if (a < 0)
        {
            zapor = zapor + 1;
        }
        else if(a >= 1)
        {
            kladne = kladne + 1;
        }

    } while (a != 0);

    kok = kok - 1;
    vysledek = soucet / kok;
    printf("%.2f", vysledek);
    printf("\nKladnych cisel je: %.0f", kladne);
    printf("\nZapornych cisel je: %.0f\n", zapor);
}
