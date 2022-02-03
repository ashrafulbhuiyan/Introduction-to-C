#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,b, area;
    printf("\tFind triangle Area\t\n");
    printf ("\nPlease enter the base (cm) of a triangle: ");
    scanf("%f", &b);
    printf ("\nPlease enter the height (cm) of a triangle: ");
    scanf("%f", &h);
    area= (b*h)/2;
    printf("\n\nThe area of the triangle is= %.2f cm",area);

    return 0;
}
