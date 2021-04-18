#include <stdio.h>
#include <conio.h>

void main()
 {
   //make a program to write reverse number 12345>54321

   int num,rem,rev_num=0;

   printf("Enter five digit number :\n");
   scanf("%d",&num);
   while (num>0) {
     rem=num%10;
     num=num/10;
     rev_num=rev_num*10+rem;

   }

printf("reverse number is %d\n", rev_num);
getch();
}
