#include<stdio.h>
int main()
{
   int num,reverse_number;
   printf("Enter any number:\n");
   scanf("%d",&num);
   reverse_number=reverse_function(num);
   printf("After reverse the no is :%d\n",reverse_number);
   return 0;
}
int sum=0,r;
reverse_function(int num)
{

    if(num)
    {
        r=num%10;
        sum=sum*10+r;
        reverse_function(num/10);
    }
    else
        return sum;
    return sum;
}

