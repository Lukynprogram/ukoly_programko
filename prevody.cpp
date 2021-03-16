//Vytvoř program pro převody délek z m na cm, dm a mm. Uživatel na vstupu zadá délku v m a hodnotu, na kterou chce tuto délku převést.
//Program podle zadané volby vypíše požadovaný výsledek. Na začátku programu bude menu, které bude vysvětlovat jaké možnosti lze vybrat.
//Vim, ze to udelat pres switch a pak case bylo lepsi, ale kdyz probirame toto, tak pujdu timto zpusobem.
#include<stdio.h>
int numm;
int delka;
int vysledek;

int menu() {
	printf("Program pro prevod jednotek.\n");
	printf("Pro prevod do decimetru zadejte: 1\n");
	printf("Pro prevod do centimetru zadejte: 2\n");
	printf("Pro prevod do milimetru zadejte: 3\n");
}

int vstup() {
	printf("Zvolte do ceho chcete prevest: ");
	scanf("%d", &delka);
	printf("Zadejte delku v metrech: ");
	scanf("%d", &numm);
}
int vyhodnoceni() {
	if (delka == 1) {
		vysledek = numm * 10;
		printf("Vysledek je: %d dm.", vysledek);
	}
	else if (delka == 2) {
		vysledek = numm * 100;
		printf("Vysledek je: %d cm.", vysledek);
	}
	else if (delka == 3) {
		vysledek = numm * 1000;
		printf("Vysledek je: %d mm. ", vysledek);
	}
	else{
		printf("Zadal jsi neco spatne.");
	}
}
