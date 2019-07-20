//13.  Multiplication Table

#include<stdio.h>
int main()
{
    int n,i,product=0;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        product=n*i;
        printf("%d X %d = %d\n",n,i,product);
    }
    return 0;
}
