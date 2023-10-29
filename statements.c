#include "statements.h"
 int st_sumn(int x)
{
    if(x==0)
        return 0;
    int s=0;
    int y=x%10;
    s+=y;
    s+=st_sumn(x/10);
    return s;
}
 int st_digroot(int x)
{

    if(x<10)
    {
        return x;
    }
    return st_digroot(st_sumn(x));
}
int st_gcd_r(int x, int y)
{
    if(x==0)
        return y;
    if(y==0)
        return x;
    if(x>=y)
        x=x%y;
    else
        y=y%x;
    return st_gcd_r(x, y);
}
 int st_gcd_i(int x, int y)
{
    while((x>0)&&(y>0))
    {
        if(x>=y)
            x%=y;
        else
            y%=x;
    }
    if(x==0)
        return y;
    return x;
}
 int st_lcm(int x, int y)
{
    return x*y/st_gcd_i(x, y);
}
