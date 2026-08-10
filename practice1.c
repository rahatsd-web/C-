// Sum & multyply of 2 numbers
#include <stdio.h>
int main()
{
   int a, b;
   printf("enter a : ");
   scanf("%d", &a);
   
   printf("enter b : ");
   scanf("%d", &b);

   int sum = a + b;
   printf("Sum is: %d \n", sum);

   printf("Multiply is: %d", a * b);

   return 0;
}


// area of square

#include <stdio.h>
int main()
{
   int area;
   printf("enter the value: ");
   scanf("%d", &area);

   printf("area of square is : %d", area * area);
   return 0;
}


// write a program to a calculate are of a circle
#include <stdio.h>
int main()
{
   int r;
   printf("enter value r : ");
   scanf("%d", &r);
   
   float pi;
   printf("enter pi : ");
   scanf("%f", &pi);

   printf("Area of circle is : %.2f", pi*r*r);

   return 0;
}
//or
#include <stdio.h>
int main()
{
   int r;
   printf("enter value r : ");
   scanf("%d", &r);

   printf("Area of circle is : %.f", 3.1416*r*r);

   return 0;
}
