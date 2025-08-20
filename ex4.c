#include <stdio.h>
#include <math.h>

int main()
{
  float cateto1;
  float cateto2;
  float h;

  printf("Digite o valor do primeito cateto: ");
  scanf("%f", &cateto1);

  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &cateto2);

  h = sqrt((cateto1*cateto1) + (cateto2*cateto2));

  printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %f \n", cateto1, cateto2, h);

  return 0;
}
  
  
