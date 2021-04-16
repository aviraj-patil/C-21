/*write algorithm and flowchart*/
#include <stdio.h>
#include <conio.h>

void main()
 {
   int a=1,b=1,sum1,sum2;

printf("%d\n%d\n", a,b);


while (a<100) {
  a+=b;
  printf("%d\n", a);
  b+=a;
  printf("%d\n", b);

}

}
