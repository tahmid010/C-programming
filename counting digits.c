#include<stdio.h>
int main()
{
int m,count=0;
printf("Enter a number : \n");
scanf("%d",&m);

while(m>0)
    {
        count=count+1;
        m=m/10;
    }
    printf("The number of digits are %d",count);
    return 0;
    }
