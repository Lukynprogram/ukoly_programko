#include<stdio.h>
#include<stdlib.h>

/* Program 2: Faktoriál (cyklus While)
Navrhni program pro výpočet faktoriálu zadaného čísla Po vypsání výsledku se program zeptá, 
zda chce uživatel pokračovat, pokud ano dojde k vyčištění obrazovky a program se opakuje,
pokud ne, program poděkuje za využití a ukončí se. */

int main()
{
    int num, vysledek = 1, rozhodnuti;
do{
    system("clear");
    printf("Vloz cislo: ");
    scanf("%d", &num);

    while(num > 1)
    {
        vysledek *= num;
        num --;
    }

    printf("Vysledek faktorialu je: %d\n", vysledek);
    printf("Prejete si pokracovat? 1 - ANO, 2 - NE: ");
    scanf("%d", &rozhodnuti);
    if(rozhodnuti == 1){
        vysledek = 1;
    }
    else if(rozhodnuti == 2){ 
        break;
    }
    else{
        printf("Zadal jsi cislo mimo hodnotu...\n");
    }
}while(rozhodnuti == 1);
printf("Dekujeme za vyuziti meho programu... \n");
}
