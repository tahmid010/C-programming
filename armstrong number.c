#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,count=0,a,sum=0;
    printf("enter an intiger number: ");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        count=count+1;
        m/=10;
    }
    m=n;
    while(m>0)
    {
        a=m%10;
        sum+=pow(a,count);
        m=m/10;
    }
    if(sum==n)
        printf("The number is an armstrong number");
    else
        printf("The number is not an armstrong number");
    return 0;

}
