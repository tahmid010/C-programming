#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("Enter your number : ");
    scanf("%d",&n);
    while(n>=10)
    {
        sum=0;
        while(n)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        if(sum>=10)
            n=sum;
        else
            break;
    }
    printf("The generic root is %d",sum);
    return 0;
}
