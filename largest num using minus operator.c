#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter three numbers:\n ");
    scanf("%d%d%d",&a,&b,&c);
    if((a-b >=0 && a-c >=0) || (b-c >=0 && a-b >=0))
        largest=a;
    else if((a-c >=0 && b-a >=0) || (c-a >=0 && b-c >=0))
        largest=b;
    else
        largest=c;
    printf("The largest among three numbers is %d",largest);
    return 0;
}
