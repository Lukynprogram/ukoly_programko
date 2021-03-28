#include <iostream>
int a, b, c;    //a = pocatek intervalu; b = konec intervalu; c = cislo k vyhodnoceni

int vstup(){
std::cout << "Vlozte zacatek intervalu prosim <1, 10>: ";   //vstup pro a
std::cin >> a;

std::cout << "vlozte konec intervalu prosim <50, 60>";  //vtup pro b
std::cin >> b;

std::cout << "Zadejte cislo, ktere chcete vyhodnotit: ";    //vstup pro c
std::cin >> c;
}

int vyhodnoceni(){
    if(a <= 10 && a >= 1){
        if(b <= 60 && b >= 50){
            if(c <= b && c >= a){
                std::cout << "Lezi v intervalu";
            }
            else{
                std::cout << "Nelezi v intervalu";
            }
        }
        else{
        	std::cout << "Zadal jsi spatne konec intervalu";
		}
    }
    else{
        std::cout << "Zadal jsi spatne zacatek intervalu";
    }
}

int main(){
    vstup();
    vyhodnoceni();
}
