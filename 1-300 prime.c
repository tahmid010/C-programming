#include<stdio.h>
int main()
{
    int num,i,count;
    for(num = 1;num<=300;num++)
    {
         count = 0;
         for(i=2;i<=num/2;i++)
        {
             if(num%i==0)
             {
                 count++;
                 break;
             }
        }
         if(count==0 && num!= 1)
             printf("%d \t",num);
    }
   return 0;
}
