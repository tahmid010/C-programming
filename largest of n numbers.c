#include<stdio.h>
int main()
{
    int n,i,num,large=0;
    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the %dth number \t" ,i);
        scanf("%d",&num);
        if(num>=large)
            large=num;
    }
    printf("The largest number is %d",large);
    return 0;
}
