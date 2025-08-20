#include <stdio.h>

int main()
{

  float raio;
  float area;
  
  const float PI = 3.1415926;

  printf("Digite o valor do raio :");
  scanf("%f", &raio);

  area =  PI * (raio*raio);
  

  printf("O valor da área = %f  \n", area);

  return 0;
}
