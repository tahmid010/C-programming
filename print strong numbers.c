#include<stdio.h>
int main()
{
    int n,t,r,i,j,fact=1,factsum=0;
    printf("enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i;
        while(t>0)
        {
            fact=1;
            r=t%10;
            for(j=1;j<=r;j++)
            {
                fact=fact*j;
            }
            factsum=factsum+fact;
            t=t/10;
        }
    if(factsum==i)
        printf("%d\t",factsum);
    }
    return 0;
}

