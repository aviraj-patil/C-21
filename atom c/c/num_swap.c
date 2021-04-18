#include <stdio.h>
#include <conio.h>

void main()
 {


   int num1,num2,temp;

   printf("Enter two numbers:\n");
   scanf("%d%d", &num1,&num2);

   temp=num1;
   num1=num2;
   num2=temp;


printf("after swapping numbers are: %d,%d \n", num1,temp);


}
