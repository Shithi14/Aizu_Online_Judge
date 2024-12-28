#include<stdio.h>
int main ()
{
    int t,hour,minute,second,n;
scanf("%d",&t);
hour=t/3600;
n=t%3600;
minute=n/60;
second=t%60;
printf("%d:%d:%d\n",hour,minute,second);
return 0;

}