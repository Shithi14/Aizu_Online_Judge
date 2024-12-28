#include<stdio.h>

int main ()

{
double r,a,c,pi=3.141592653589793238;
scanf("%lf",&r);
a=pi*(r*r);
c=2*pi*r;
printf("%.10lf %.10lf\n",a,c);
return 0;
}