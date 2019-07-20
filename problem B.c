#include<stdio.h>
int main()
{
    long int i,a,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b%2==0 && b>=0)
            printf("even\n");
        if(b%2!=0 && b>=0)
            printf("odd\n");
    }
    return 0;
}
