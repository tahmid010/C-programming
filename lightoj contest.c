#include<stdio.h>
int main()
{
    int a,i,j,neg=0,pos=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d %d %d",&j,&k,L);
        if(j<0)
            neg++;
        if(j>0)
            pos++;
    }
    printf("%d %d",pos,neg);
    return 0;
}
