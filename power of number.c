//19.  Power of Number

#include<stdio.h>
int main()
{
    int base,power,result=1;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);
    while(power!=0)
       {
            result=result*base;
            power--;
       }
    printf("The result is %d",result);
    return 0;
}
