#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            printf("%d is not a prime number.",n);
            break;
        }
        else
        {
            if(i==n-1)
            printf("The number is prime");

        }

    }




    return 0;
}
