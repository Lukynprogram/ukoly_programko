#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vysledek;
    int cislo;
    int i;
    printf("zadej cislo co chces nasobit: ");
    scanf("%d", &cislo);
    if (cislo > 0 && cislo < 11)
    {
        for (i = 1; i < 11; i++)
        {
            vysledek = cislo * i;
            printf("%d * %d = %d\n", i, cislo, vysledek);
        }
    }
    else
    {
        printf("Toto neni mala nasobilka!");
    }
}
