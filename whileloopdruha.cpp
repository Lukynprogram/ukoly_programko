#include <stdio.h>

int main()
{
  int cislo;
  int kladna = 0;
  int zaporna = 0;

  while (cislo != 0) 
  {
    printf("Vloz cislo: {exit = 0}: ");
    scanf("%d", &cislo);
    if (cislo < 0)
    {
      zaporna = zaporna + 1;
    }
    else if (cislo >= 1)
    {
      kladna = kladna + 1;
    }
  }
  printf("Pocet zapornych cisel je: %d \n", zaporna);
  printf("Pocet kladnych cisel je: %d\n", kladna);
}
