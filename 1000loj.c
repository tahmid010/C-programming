#include<stdio.h>
int main()
{
    int i,sum=0,t,m,n;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        sum=m+n;
        printf("%d\n",sum);
    }
    return 0;
}
