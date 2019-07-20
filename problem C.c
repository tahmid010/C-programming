#include<stdio.h>
int main()
{
    int a,i,j,b,max=0,min=100;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        max = 0;
        min = 100;
        for(j=1;j<=5;j++)
        {
            scanf("%d",&b);
            if(b > max)
                max = b;
            if(min > b)
                min = b;

        }
        printf("%d %d\n",max,min);
    }
    return 0;
}
