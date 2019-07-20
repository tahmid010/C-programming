#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    lcm = (a>b)?a:b;
    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            printf("The lcm is %d ",lcm);
            break;
        }
        else
            lcm++;
    }
    return 0;
}
