#include<stdio.h>
int main()
{
    int n1,n2,sum=0;
    printf("Enter two number : ");
    scanf("%d%d",&n1,&n2);
    sum=n1-(-n2);
    printf("The sum is %d",sum);
    return 0;
}
