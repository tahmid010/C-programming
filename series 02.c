#include<stdio.h>
int main()
{
    int i,j,n,sum,total_sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    if(n>=0 && n<=1000)
    {
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=i;j++)
            {
                sum=sum+j;
            }
            total_sum=total_sum+sum;
        }
        printf("Total sum is %d",total_sum);
    }
    else
        printf("The input is not in range");
    return 0;
}
