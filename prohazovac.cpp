//Vytvoř program pro záměnu hodnot ve 2 proměnných a, b(například: na vstupu uživatel zadá a = 5 a b = 3 a program na výstupu vypíše a = 3  a b = 5)
#include<stdio.h>
int a = 0;
int b = 0; 
int c = 0;

int vstup() {
	printf("Zadejte prosim hodnotu a: ");
	scanf("%d", &a);
	printf("Zadejte prosim hodnotu b: ");
	scanf("%d", &b);
}

int magic() {
	c = a;
	a = b;
	b = c;
}

int printer() {
	printf("Hodnota a je: %d.\n", a);
	printf("Hodnota b je: %d.\n", b);
}

int main() {
	vstup();
	magic();
	printer();
}
