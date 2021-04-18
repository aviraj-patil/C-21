#include <stdio.h>
#include <conio.h>

void main()
 {


   int year;
   printf("enter year:\n");
   scanf("%d", &year);


   if (((year%4==0)&&(year%100!=0))||(year%400==0)) {

     printf("\n%d is leap year.\n", year);

   }
   else
   {
     printf("\n %d is not leap year.\n", year);

   }
}
