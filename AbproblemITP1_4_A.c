#include<stdio.h>
int main ()
{
    int a,b,r,d;
    scanf("%d%d",&a,&b);
    d=a/b;
    r=a%b;
    double real=a/(double)b;
    printf("%d %d %.10lf\n",d,r,real);
    return 0;
}