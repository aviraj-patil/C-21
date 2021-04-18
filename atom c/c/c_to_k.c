#include<stdio.h>
#include<conio.h>

int main()
{
	 float celsius,kelvin;
	 printf("Enter temperature in celsius: ");
	 scanf("%f", &celsius);
	 kelvin = 273.15 + celsius;
	 printf("%0.2f Celsius = %0.2f Kelvin",celsius, kelvin);
	 getch();

	 return(0);
}
