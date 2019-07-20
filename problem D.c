#include<stdio.h>
int main()
{
    int a,b,i,j,k,count=0,count1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        count1=0;
        for(j=1;j<=10;j++)
        {
            count=0;
            scanf("%d",&b);
            for(k=2;k<=b/2;k++)
            {
                if(b%k==0)
                    count++;
            }
            if(count==0 && b!= 1)
            {
                count1++;
            }
        }
        printf("%d",count1);
    }
    return 0;
}
