//libra, euro, dolar
#include <stdio.h>
int kc;
int num;
double vysledek;

int vstup() 
{
	printf("Vloz castku v KC: ");
	scanf("%d", &kc);
	printf("Na co chcete prevadet?\n");
	printf("Pro eura zadej: 1 Pro dolary zadej: 2 Pro libry zadej: 3: ");
	scanf("%d", &num);
}

int vyhodnoceni() {
	if (num == 1) {
		vysledek = kc / 26.1950;
		printf("Za danou castku dostanete zaokrouhlene %.3lf euro", vysledek);
	}
	else if (num == 2) {
		vysledek = kc / 21.9740;
		printf("Za danou castku dostanete zaokrouhlene %.3lf dolaru", vysledek);
	}
	else {
		vysledek = kc / 30.5720;
		printf("Za danou castku dostanete zaokrouhlene %.3lf liber", vysledek);
	}
}

int main() {
	vstup();
	vyhodnoceni();
}
