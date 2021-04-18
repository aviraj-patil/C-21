#include <stdio.h>
#include <conio.h>

void main()
 {

   float l,w,area,perimeter;
   printf("enter length and width:\n");
   scanf("%f%f", &l,&w);

   area=l*w;
   perimeter=2*(l+w);

   printf("area of rectangle:%.2f\n", area);
   printf("perimeter of rectangle:%.2f\n", perimeter);


}
