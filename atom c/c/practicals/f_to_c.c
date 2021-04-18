#include <stdio.h>
#include <conio.h>

void main()
 {


   float f,c;
   printf("Enter Temperature in Fahrenheit:\n");
   scanf("%f",&f);

   c=(f-32)*5/9;

   printf("Temperature in celsius:%.2f\n", c);


}
