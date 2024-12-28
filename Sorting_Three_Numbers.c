#include<stdio.h>
int main ()
{
   long long int a,b,c,temp;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;

    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    printf("%lld %lld %lld\n",a,b,c);
    return 0;
}