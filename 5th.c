// V V I
// FUNCTIONs & RECURTION
// FUNCTioN is a block of code that performs particular task. It can be used multiple time, increase code reusability
//Take argument >> Do work >> Return reult

#include <stdio.h>  
void mra(); //// DECLARATION / PROTOTYPE

int main()
{
   mra();  //// FUNCTION CALL
   mra();
   mra();

   return 0;
}

void mra() {  //// FUNCTion DEFINITION
    printf("Hello\n");
}


// PROPERTIES --- Execution always starts from main, A function gets called directly or idirectly from main, There can be multiple functions in a program
// Function type -- 1. libbrary  2. user defined
// passing Arguments -- (Functions can take value)- PARAMETER and (give some value)-RETURN VALUE

#include <stdio.h>  
int sum (int a, int b);
int main()
{
  int a;
  printf("Enter the value:");
  scanf("%d", &a);
  
  int b;
  printf("Enter the value:");
  scanf("%d", &b);

  int s = (a+ b);
  printf(" Sum is %d", s);

   return 0;
}
 int sum (int x, int y){
    return x + y;
 }


// OR -- table of a number PROBLEM  

#include <stdio.h>
int sum(int a, int b);
void printtable(int n);

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printtable(n); // Argument / actual Parameter

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

void printtable(int n) // Formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
       printf("%d\n", i * n);
    }
}

/// Function can return only one value at a time, change to peramters in function don't change the values in calling fuction ( Cz a copy of argument is passed to the function )

// Code for VALUE.....  1
#include <stdio.h>

void calculatePrice(float value);

int main()
{
    float value;
    printf("Enter the value: ");
    scanf("%f", &value);
    calculatePrice(value);
    printf("Value is %f", value);

    return 0;
}

void calculatePrice(float value){
    value = value + (0.16 * value);
    printf("Final price is %f\n", value);
}


// RECURSION --- When a function calss itself, it's called recursion
#include <stdio.h>
void printHello(int count);
int main()
{
    printHello(5);
    return 0;
}
void printHello(int count) // Recursive function
{
    if (count == 0)
    {
        return;
    }
    printf("hello World\n");
    printHello(count - 1);
}

//Properties of Recursion

