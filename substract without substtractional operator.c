#include<stdio.h>
int main()
{
    int n1,n2,sum;
    printf("enter the two number\n ");
    scanf("%d%d",&n1,&n2);
    sum=n1 + (~n2 + 1);
    printf("The result is %d",sum);
    return 0;
}
