#include <stdio.h>
#include <conio.h>

void main()
 {
   int grades;

   printf("Enter your grades:\n");
   scanf("%d",&grades);
switch (grades/10) {
  case 9:
    printf("\nYou got A\n" );
   break;
   case 8:
      printf("\nYou got B\n");
    break;
    case 7:
      printf("\nYou got C\n");
    break;
    case 6:
      printf("\nYou got D\n");
   break;
   case 3:
      printf("\nYou got E\n");
    break;
    default :
    printf("\nYou got F\n" );


}

}
