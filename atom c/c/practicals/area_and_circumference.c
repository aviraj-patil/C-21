#include <stdio.h>
#include <conio.h>

void main()
 {


   float r,cir,area,pi=3.14;
   printf("Enter radius of circle:\n");
   scanf("%f", &r);

   area=pi*r*r;
   cir=2*pi*r;

   printf("area of circle %.2f\n", area);
   printf("circumference of circle %.2f\n", cir);


}
