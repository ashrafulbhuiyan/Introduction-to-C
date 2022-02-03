#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b, temp;
    printf("\t Swaping two integers\n");
    printf("\nPlease enter 1st value: ");
    scanf ("%d",&a);
    printf("\nPlease enter 2nd value: ");
    scanf ("%d",&b);
    b=temp;
    b=a;
    a=b;
    printf ("\nAfter swapping value of a=%d and b=%d", a,b);

    return 0;
}
