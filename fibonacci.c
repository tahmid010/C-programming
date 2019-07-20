#include<stdio.h>
int main()
{
    int n,i,a1=0,a2=1,sum=0;
    printf("enter the number of terms : ");
    scanf("%d",&n);
    printf("The fibonacci series : \n");
    for(i=1;i<=n;i++)
    {
        if(i<=1)
            sum=i;
        else
        {
            sum=a1+a2;
            a1=a2;
            a2=sum;
        }
        printf("%d\t",sum);
    }
    return 0;
}
