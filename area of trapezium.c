#include<stdio.h>
int main()
{
  float base1, base2, height, Area, Median;
  printf("Please Enter two bases and height of the trapezium \n");
  scanf("%f %f %f", &base1, &base2, &height);
  Area = 0.5 * (base1 + base2) * height;
  Median = 0.5 * (base1+ base2);
  printf("Area of a trapezium = %.2f \n", Area);
  return 0;
}
