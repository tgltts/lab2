#include <stdio.h>

int main()
{
  float a;
  float celsius;

  float contaf;
  

  printf("digite o valor na escala celsius : ");  
  scanf("%f", &a);
  celsius = a;
  contaf = (a*1.8) + 32 ;
  
   printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit.",celsius,contaf);

   return 0;
}
