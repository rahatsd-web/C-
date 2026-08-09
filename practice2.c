// Practice -- int a = 1.999999;  explicit
#include <stdio.h>
#include <math.h>
int main()
{
    int a = (int)1.999999;
    printf("%d\n", a);

    return 0;
}
// OR
// Practice -- int a = 1.999999;  implicit
#include <stdio.h>
#include <math.h>
int main()
{
   float a = 1.999999;
   int b;
   b = a;

   printf("value of b = %d", b);

   return 0;
}


// Associativity
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 5*2-2*3;
   int b = 5*2/2*3;
   int c = 5*(2/2)*3;
   int d = 5+2/2*3;

   printf("Total value of a = %d\n", a);
   printf("Total value of b = %d\n", b);
   printf("Total value of c = %d\n", c);
   printf("Total value of d = %d", d);
   return 0;
}


// WAP to check if a number  is divisible by 2 or not
#include <stdio.h>
#include <math.h>
int main()
{
   int num;
   printf ("Enter the number : ");
   scanf("%d", &num );
   printf ("%d", num % 2 == 0);

   return 0;
}


// WAP to check a number is even or odd
#include <stdio.h>
#include <math.h>
int main()
{
   int num;
   printf ("Enter the number : ");
   scanf("%d", &num );
   printf ("Number is even %d", num % 2 == 0);

   return 0;
}


// Are the following valid or not  (( int a = 8^8) (intx;inty=x;) (intx, y=x;) (char stars = '**'))
//01 valid
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 8^8;
   printf (" %d ", a);

   return 0;
}

//02 valid
#include <stdio.h>
#include <math.h>
int main()
{
   int x; int y = x;

   return 0;
}

//03 non-valid
#include <stdio.h>
#include <math.h>
int main()
{
   int x, y = x;

   return 0;
}

//04 non-valid
#include <stdio.h>
#include <math.h>
int main()
{
    char stars = '**';
  
   return 0;
}


// True & False 
//01
#include <stdio.h>
#include <math.h>
int main()
{
    int isMonday = 0;
    int isRaining = 1;
   
    printf("%d\n", isMonday && isRaining);

    return 0;
}


//02
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Enter the number :");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);

   return 0;
}