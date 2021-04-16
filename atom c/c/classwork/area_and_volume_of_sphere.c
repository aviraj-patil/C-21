#include <stdio.h>
#include <conio.h>

void main()
{
  float pi,area,r,volume;
  pi=3.14;

  printf("enter radius of sphere:");
  scanf("%f",&r);
  area=4*pi*r*r;
  printf("area of sphere:%.2f\n",area);
  volume=(4.0/3.0)*pi*r*r*r;
  printf("volume of sphere:%.2f\n",volume);


}
