#include <stdio.h>
#include <conio.h>

void main()
{
  float pi,area,r;
  pi=3.14;

  printf("enter radius of circle:");
  scanf("%f",&r);
  area=pi*r*r;
  /* area=pi*r*r */

  printf("area is :%.2f",area);


}
