#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,r,count=0,x;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        count++;
    }
    while(n>0)
    {
        count--;
        x=pow(10,count);
        r=n/x;
        printf(" %d",r);
        n=n % x;
    }
    return 0;
}
