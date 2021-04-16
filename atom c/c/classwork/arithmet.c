#include <stdio.h>

void main()
{
  int num1,num2,sum,sub,mul;
  float div;

  printf("enter two numbers :\n");
  scanf("%d%d",&num1,&num2 );
  sum=num1+num2;
  sub=num1-num2;
  mul=num1*num2;
  div=num1/num2;

  printf("Addition : %d\n",sum );
  printf("Subtraction : %d\n",sub );
  printf("Multiplication : %d\n",mul );
  printf("Division : %d\n",div );

}
