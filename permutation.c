#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=3;a>=1;a--)
        {
        for(b=3;b>=1;b--)
            {
            for(c=3;c>=1;c--)
                {
                    if(b!=a&&a!=c&&c!=b)
                    {
                        printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
}

