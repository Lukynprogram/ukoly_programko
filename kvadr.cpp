#include <stdio.h>
#include <stdlib.h>
/*Příklad 1: Kvádr (cyklus do-while)
Navrhni program pro výpočet povrchu a objemu kvádru.
Na vstupu jsou zadány délky stran, uživatel si vybere, zda chce počítat povrch nebo objem.
Po vypsání výsledku se program zeptá, zda chce uživatel pokračovat, 
pokud ano dojde k vyčištění obrazovky a program se opakuje, pokud ne, program poděkuje za využití a ukončí se. */
int main(){
    float a, b, c;      //strany
    float objem, povrch; //vypoctove
    int rozhodnuti, pokracovani; //rozhodujici
do{
    printf("Copak chcete vypocitat (objem - 1, povrch - 2): ");
    scanf("%d", &rozhodnuti);
    printf("Vlozte hodnotu strany a v metrech: ");
    scanf("%f", &a);
    printf("Vlozte hodnotu strany b v metrech: ");
    scanf("%f", &b);
    printf("Vlozte hodnotu strany c v metrech: ");
    scanf("%f", &c);

    if(rozhodnuti == 1){
        objem = a * b * c;
        printf("Objem kvádru je: %.2f m3\n", objem);
    }
    else if(rozhodnuti == 2){
        povrch = 2 * (a * b + a * c + b * c);
        printf("Povrch kvádru je: %f m2\n", povrch);
    }
    else{
        printf("Zadal jsi cislo mimo ramec moznosti...\n");
    }
    printf("Přejete si pokračovat? 1 - ANO, 2 - NE: ");
    scanf("%d", &pokracovani);
    system("clear");

}while(pokracovani == 1);
}
