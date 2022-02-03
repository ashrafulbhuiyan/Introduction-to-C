#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a, b;
   printf("Please enter 1st value: ");
   scanf ("%d", &a);
   printf("\nPlease enter 2nd value: ");
   scanf("%d",&b);
   a = a+b;
   b= a-b;
   a= a-b;

   printf ("After swapping a = %d and b= %d", a,b);
    return 0;
}
