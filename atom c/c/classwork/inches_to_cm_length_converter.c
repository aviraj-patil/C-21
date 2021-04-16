#include <stdio.h>
#include <conio.h>

void main()
 {
  int inc;
  float cen;

  printf("Enter length in Inch:");
  scanf("%d",&inc);
  cen=2.54*inc;
  printf("Equivalent length in Centimetres = %0.2f\n",cen);

}
