#include <stdio.h>
#include <conio.h>

void main()
 {


   int num_day;

   printf("Enter a number:\n");
   scanf("%d",&num_day);

switch (num_day)
{

    case 1:
      printf("\nday is Monday.\n");
      break;
    case 2:
      printf("\nday is Tuesday\n");
      break;
    case 3:
      printf("\nday is Wednesday\n");
      break;
    case 4:
      printf("\nday is Thursday\n");
      break;
    case 5:
      printf("\nday is Friday\n");
      break;
    case 6:
      printf("\nday is Saturday\n");
      break;
    case 7:
      printf("\nday is Sunday\n");
      break;
    default:
      printf("incorrect choice.\n");


}

}
