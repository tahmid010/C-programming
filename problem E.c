#include<stdio.h>
int main()
{
    int a,i,j,b,sum=0;
    double avg;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=0;
        for(j=1;j<=5;j++)
        {
            scanf("%d",&b);
            sum=sum+b;
        }
        avg=sum/5;
        printf("%lf",avg);
    }
    return 0;
}
