#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    double y;
    
    printf("Enter x:");
    scanf("%lf", &x);
    if (-10.5<=x && x<8.125)
    {
        y= sqrt(abs(x + 2)) + abs(cos(x))/2;
    }

    else if(10<=x && x<15)
    {
        y=4;
    }

    else if(50<=x && x<150)
    {
        y=pow(2, log10(100))-4*x;
    }

    else
    {
        y=-1.5;
    }
  system("cls");
     printf("\ny = %lf", y);
    
  return 0;
}



