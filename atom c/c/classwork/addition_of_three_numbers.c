#include <stdio.h>
#include <conio.h>

void main()
{
    int num1,num2,num3;
    float avg;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    avg=(num1+num2+num3)/2;

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d,%d and %d is: %.2f",num1,num2,num3,avg);

    return 0;
}
