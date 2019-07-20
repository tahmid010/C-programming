#include<stdio.h>
int fact(int n);
int main()
{
    int n,r,ncr;
    printf("Enter the value of n & r :\n");
    scanf("%d%d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("The ncr is %d",ncr);
    return 0;
}
int fact(int n)
{
    int i=1;
    while(n!=0)
    {
        i=i*n;
        n--;
    }
    return i;
}
