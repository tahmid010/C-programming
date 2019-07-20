#include <stdio.h>
#include<math.h>
int main()
{
    int oct ,dec=0 ,t ,p, r ,i=0 ,x;
    printf("Enter your octal number :\t");
    scanf("%d",&oct);
    t=oct;
    p=oct;
    while(t!=0)
    {
        r=t%10;
        if(r>=8)
        {
            printf("Error");
            return ;
        }
        t=t/10;
    }
    while(p!=0)
    {
        r=p%10;
        x=pow(8,i);
        dec=dec+r*x;
        p=p/10;
        i++;
    }
    printf("The decimal conversion of the octal number %d is %d ",oct,dec);
    return 0;
}
