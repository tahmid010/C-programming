#include<stdio.h>
int main()
{
    int num,i,p;
    printf("enter the number:");
    scanf("%d",&num);
    p=1;
    for(i=2;i<=num/2;i++)
    {
      if(num%i==0)
       p=0;
      if(p==1)
       printf("the number is prime\n");
    else
       printf("the number is not prime\n");
       break;
    }

    return 0;

}
