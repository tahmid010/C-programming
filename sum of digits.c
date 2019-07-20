//18.  Sum of Digits

#include<stdio.h>
int main()
{
    int n,d,sum=0;
    printf("enter your number : ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}
