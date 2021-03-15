//Program 1:  Uživatel na vstupu zadá desetinné císlo, program vyhodnotí, zda je císlo vetší nez 50. 
#include <stdio.h>
#include <stdlib.h>
double x;

int vstup(){									//zde uzivatel vklada hodnotu.
	printf("Zadej cislo: ");
	scanf("%lf", &x);
}

int vyhodnoceni(){								//vyhodnocuje zda je cislo vetsi/mensi, nebo rovno 50.
	if(x > 50){
		printf("Cislo je vetsi nez 50.");
	}
	else if(x == 50){
		printf("Cislo je 50.");
	}
	else{
		printf("Cislo je mensi nez 50.");
	}
	
}
	
int vzhled(){									//zde se upravuje vzhled programu a funkènost programu.
	system("cls");
	system("color c");
	printf("Zadal jsi cislo: %lf \n", x);
}

int sign(){
	printf("\n\nIIII                 IIII\n");
	printf("IIII                 IIII\n");
	printf("IIII                 IIII\n");
	printf("IIII                 IIII\n");
	printf("IIII         IIII    IIII\n");
	printf("IIIIIIIIII   IIIIIIIIIIII\n");
	printf("IIIIIIIIII    IIIIIIIIII    Autor: Lukas Jonak\n\n");
}

int main(){										//Toto je hlavní funkce programu, která vyvolává ostatní funkce.
	vstup();
	vzhled();
	vyhodnoceni();
	sign();
}
