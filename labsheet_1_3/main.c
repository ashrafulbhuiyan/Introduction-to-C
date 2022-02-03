#include <stdio.h>
#include <stdlib.h>

int main()
{   float r,area,perimeter;
    const double PI = 3.1416;
    printf("\tCalculate the area and perimeter of the circle\n");
    printf("\nPlease enter the radius of the circle: ");
    scanf("%f",&r);
    area=PI*r*r;
    perimeter=2*PI*r;
    printf ("\nThe area is = %.2f  and perimeter is = %.2f ", area, perimeter);

    return 0;
}
