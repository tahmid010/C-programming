#include<stdio.h>
long fact(int n)
{
    long i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum+(fact(i)/i);
    }
    printf("sum :%lf",sum);
    return 0;
}
