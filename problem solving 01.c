//Roll : 170121  Name : Tahmid Rahman

#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,u,a,x,y,z,v,c=0,m,s;
    printf("Enter your number : ");
    scanf("%d",&n);
    v=n;
    t=n;
    u=n;
    while(n>0)
    {
        c=c+1;
        n/=10;
    }
    x=v%10;
    a=(pow(10,(c-1)));
    y=u/a;
    z=t%a;
    m=z/10;

    s=x*pow(10,(c-1))+m*10+y;


    printf("The desired number is %d",s);


    return 0;
}
