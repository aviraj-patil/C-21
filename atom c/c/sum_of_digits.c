#include <stdio.h>
#include <conio.h>

void main()
 {
   int num,sum=0,rem;

   printf("enter a number :\n" );
   scanf("%d", &num);

   while (num>0) {
     rem=num%10;
     num=num/10;
     sum=sum+rem;
   }


printf("%d\n", sum);

}
