//Program 2:  Uživatel na vstupu zadá èíslo, program vyhodnotí, zda z tohoto èísla je možno vypoèítat odmocninu.
#include <iostream>
#include <math.h>
double x;
double vysledek;

int vstup(){
	std::cout << "Zadejte cislo prosim: ";
	std::cin >> x;
}

int vyhodnoceni(){
	vysledek = sqrt(x);
	if(vysledek > 0){
		std::cout << "Vysledek je: " << vysledek;
	}
	else{
		std::cout << "Cislo nejde odmocnit.";
	}
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

int main(){
	vstup();
	vyhodnoceni();
	sign();
}
