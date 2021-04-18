#include<stdio.h>
#include<conio.h>

void main()
 {


   float c,k;
	 printf("Enter temperature in celsius: ");
   scanf("%f",&c);
   k=c+273.15;
   printf("%.2f celsius = %.2f kelvin\n",c,k);

}
