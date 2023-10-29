#include <stdio.h>
#include <stdlib.h>
#include "statements.h"
int main()
{
   int x, y;
   printf("Write a number, we will write sum of its digits\n");
   scanf("%d", &x);
   printf("%d\n", st_sumn(x));
   printf("Write a number, we will write its digital root\n");
   scanf("%d", &x);
   printf("%d\n", st_digroot(x));
   printf("Write two numbers, we will write their greatest common divider two times\n");
   scanf("%d%d", &x, &y);
   printf("%d\n", st_gcd_i(x, y));
   printf("%d\n", st_gcd_r(x, y));
   printf("Write two numbers, we will write their  least common multiple\n");
   scanf("%d%d", &x, &y);
   printf("%d\n", st_lcm(x, y));
    return 0;
}
