#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,d,x1,x2,real_part,imaginary_part;
    printf("enter the value of a,b & c :");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+d*0.5)/(2*a);
        x2=(-b-d*0.5)/(2*a);
        printf("x1 = %.2lf    x2 = %.2lf",x1,x2);
    }
    else if(d==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("x1 = %.2lf    x2 = %.2lf",x1,x2);
    }
    else
    {
        real_part=-b/(2*a);
        imaginary_part=sqrt(-d)/(2*a);
        printf("x1= %.2lf+%.2lfi    x2=%.2lf-%.2lfi",real_part,imaginary_part,real_part,imaginary_part);
    }
    return 0;

}
