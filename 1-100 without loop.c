#include<stdio.h>

int printing(unsigned int n)
{
    if(n<=100)
    {
        printf(" %d\t",n);
        printing(n+1);
    }
    return;
}


int main()
{
    printing(1);
    return 0;
}
