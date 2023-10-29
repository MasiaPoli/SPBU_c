#include <stdio.h>
#include <stdlib.h>
#include "statements.h"
int main()
{
   int x, y;
   scanf("%d", &x);
   printf("%d\n", st_sumn(x));
   scanf("%d", &x);
   printf("%d\n", st_digroot(x));
   scanf("%d%d", &x, &y);
   printf("%d\n", st_gcd_i(x, y));
   printf("%d\n", st_gcd_r(x, y));
   scanf("%d%d", &x, &y);
   printf("%d\n", st_lcm(x, y));
    return 0;
}
