#include <stdio.h>

int main()
{
  int cislo;
  int nejvetsi = 0;

  printf("Vloz cislo: {exit = 0}: ");
  scanf("%d", &cislo);
  while (cislo != 0)
  {

    if (nejvetsi < cislo)
    {
      nejvetsi = cislo;
    }
    printf("Vloz cislo: ");
    scanf("%d", &cislo);
  }
  printf("Nejvetsi cislo je: %d \n", nejvetsi);
}
