#include <bits/stdc++.h>
/* Navrhni program pro výpočet DPH výrobku. Na vstupu uživatel zadá cenu výrobku bez DPH,
poté si vybere, zda DPH bude 10 % nebo 12 %. Program vypíše cenu výrobku, DPH a cenu s DPH.

Po vypsání se program uživatele zeptá, zda chce pokračovat a zadat další cenu výrobku.
Pokud ano program vyčistí obrazovku a opakuje celý postup, pokud ne, program poděkuje za využití a ukončí se. */

int main(){
float bezdph, sdph, procento;
int volba, volba1, volba2;
do{
    printf("Zadej cenu bez DPH: ");
    scanf("%f", &bezdph);

pokracovac:
    printf("Rozhodni se mezi 10% DPH - 1 a 12% DPH - 2: ");
    scanf("%d", &volba);
    if(volba == 1){
        procento = bezdph / 100;
        sdph = bezdph + (procento * 10);
        printf("Cena s dph, ktere cini 10 procent je: %.3f Korun\n", sdph);
    }
    else if(volba == 2){
        procento = bezdph / 100;
        sdph = bezdph + (procento * 12);
        printf("Cena s dph, ktere cini 12 procent je: %.3f Korun\n", sdph);
    }
    else{
        printf("Zadal jsi mimo rámec moznosti, chces to zkusit znovu? 1 - ANO, 2 - NE: ");
        scanf("%d", &volba1);
        if(volba1 == 1){
            goto pokracovac; 
        }
        else if(volba1 == 2){
            printf("Dekuji za vyuziti tohoto programu. ");
        }
        else{
            printf("Jsi fakt mimo...");
        }
    }
pokracovac1:
    printf("Prejete si pokracovat? 1 - ANO, 2 - NE: ");
    scanf("%d", &volba2);
    if(volba2 == 1){
        continue;
    }
    else if(volba2 == 2){
        break;
    }
    else{
        printf("Zadal jsi chybnou hodnotu: ");
        printf("Prejes si to zkusit znova? 1 - ANO, 2 - NE: ");
        scanf("%d", &volba1);
        if(volba1 == 1){
            goto pokracovac1;
        }
        else if(volba1 == 2){
            break;
        }
        else{
            printf("Jsi fakt mimo...");
            break;
        }
    }
    system("clear");
}while(volba2 = 1);
printf("Dekuji za vyuziti tohoto programu. \n");
}
