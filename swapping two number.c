#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the value of a & b : \n");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("The changed value is a = %d & b = %d",a,b);
    return 0;
}
