#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
main()
{
    int angle=0;
    float x,y;
    printf("             angle      cos(angle)\n");
    while(angle<=MAX)
    {
        y=(PI/MAX)*angle;
        x=cos(y);
        printf("%15d %15.5f\n",angle,x);
        angle=angle+10;
    }
}
