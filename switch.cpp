#include<stdio.h>
#include<stdlib.h>
int main(){
    int hodnota;
    int castka;
    float vysledek;
    printf("Zvol jsi do jake meny chces 1. USD; 2. EUR; 3. Libra; 4. Tele: ");
    scanf("%d", &hodnota);
    printf("Zadej kolik mas korun: ");
    scanf("%d", &castka);
switch(hodnota) {
  case 1:
    vysledek = castka / 21.87;
    printf("Ziskas %f USD", vysledek);
    break;
  case 2:
    vysledek = castka / 26.03;
    printf("Ziskas %f EUR", vysledek);
    break;
  case 3:
    vysledek = castka / 30.11;
    printf("Ziskas %f liber", vysledek);
    break;

  case 4:
    vysledek = castka / 2.682;
    printf("Ziskas %f Tele.");
    break;

  default:
    printf("Zvolil jsi mimo. ");
}
}
