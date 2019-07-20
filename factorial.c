#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}
