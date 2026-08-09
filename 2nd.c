 // INSTRUCTIONS -- These are statements in a Program, there are 3 type of INSTRUCTION
// 1.Type Declaration Instruction 2.Arithmetic Instruction 3. Control Instruction

// ## Type Declaration Instruction ##-- Declare var before using it

#include <stdio.h>
int main()
{
   int a = 22;
   int b = a;
   int c = b * 6;
   int d = 1, e;


   //You must declare a variable before using it; otherwise, it will show an error.
   int oldAge = 22;
// int newAge = oldAge + year;
   int year = 2; 

// int  x = y = z = 4; <<Use and declare is not possible at the same time>>
   int x, y, z;
   x = y = z = 4;

   return 0;
}


// ## Arithmetic Instruction ## -- Single variable on the LHS (( a+b) a is Operand & + is Operator)
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 22;
   int b = 11;
// int x, y = a * b -- Single variable on the LHS     
   int sum = a + b;
   int mul = a * b;
   int sub = a - b;
   int div = a / b;
   int power = pow(a, b);
   printf("%d", power);

   return 0;
}

// Modular Operator -- Returns reminder for int not Float
#include <stdio.h>
#include <math.h>
int main()
{
printf ("%d\n", 16 % 8); // 0   integer numerator ( + , - ) both are same
printf ("%d\n", 16 % 10); // 6
printf ("%d", -16 % 10); // -6
   return 0;
}

// ## Type Conversion ##
//Implicit Conversion (Automatic Conversion)
#include <stdio.h>

int main()
{
    int a = 10;
    float b;

    b = a;   // implicit conversion

    printf("Value of b = %f", b);

    return 0;
}

//Explicit Conversion (Type Casting)
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;

    float result;

    result = (float)a / b;   // explicit conversion

    printf("Result = %f", result);

    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
printf ("%d\n", 2 * 2); 
printf ("%f\n", 2.0 * 2.0);
printf ("%f\n", 2 * 2.0);
printf ("%f\n", 4 / 2.0);

   return 0;
}

// Operator Precedence (*, /, %) >> (+, -) >> (=)
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 4 + 8 * 2;
   int b = 50 - 55 / 5;
   int c = a + b;
   printf("Total value of c = %d", c);
   return 0;
}

// Associativity ( For same precedence) => {{x = 4 * 3 / 6 * 2}}
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 4 * 3 / 8 * 2;

   printf("Total value of a = %d", a);
   return 0;
}


// ## Control Instruction ## -- used to determine flow of program. 4 types of Control Instruction :::

// Sequence Control (*, /, %) >> (+, -) >> (=)
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 4 * 3 / 8 * 2;

   printf("Total value of a = %d", a);
   return 0;
}

// Decision Control ( IF, ELSE )
// Loop Control ( FOR, WHILE )
// Caee Control


// OPERATORS -- 7 types of operators :::

// Relation operators ( ==, >, >=, <, <=, !=) in C True = 1 & false = 0
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 2;
   int b = 2;
   int c = 4;
   int d = 5;
   int e = 1;
   int f = 7;
   int g = 9;
   int h = 6;
   printf(" %d\n", a == a);
   printf(" %d\n", c > d);
   printf(" %d\n", e >= f);
   printf(" %d\n", g < h);
   printf(" %d\n", h <= f);
   printf(" %d", g != e);
   return 0;
}

// Logical operators ( and, or, not) (&&, ||, !)
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 2;
   int b = 2;
   int c = 4;
   int d = 5;
   int e = 1;
   int f = 7;

   printf(" %d\n", a<d && f>b); // AND logic 
   printf(" %d\n", a<d && f==b);
   printf(" %d\n", a>=d && f>b);
   printf(" %d\n", a>d && f<=b);
   
   printf(" %d\n", a<d || f>b); // OR logic 
   printf(" %d\n", a<d || f==b);
   printf(" %d\n", a>=d || f>b);
   printf(" %d\n", a>d || f<=b);

   printf(" %d\n", !((a<d) && (f>b))); // NOT logic 
   printf(" %d\n", !((a<d) && (f==b)));
   printf(" %d\n", !((a>=d) && (f>b)));
   printf(" %d\n", !((a>d) && (f<=b)));
 
   return 0;
}
//// Logical operators Precendence ( ! ) > (*, /, %) > (+, -) > (<, <=, >, >=) > (==, !=) > (&&) > (||) > (=)

// Assigenment Operator ( =, +=, -=, *=, /=, %=)
#include <stdio.h>
#include <math.h>
int main()
{
   int a = 2;
   int b = 2;

   a += b;
   a -= b;
   a *= b;
   a /= b;
   a %= b;
   a = a + b;

   printf(" %d\n", a);

   return 0;
}