//4. Strong Number

#include<stdio.h>
int main()
{
    int n,t,r,i,fact=1,factsum=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        fact=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
           fact=fact*i;
        }
        factsum=factsum+fact;
        n=n/10;
    }
    if(factsum==t)
        printf("The number is strong");
    else
        printf("The number is not strong");
    return 0;
}
