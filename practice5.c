// Write 2 fuctions- one to print(Hello) & second to print (Bye)
#include <stdio.h>  
void phello(); 
void pbye(); 

int main()
{
   phello();  
   pbye();

   return 0;
}

void phello() {  
    printf("Hello\n");
}

void pbye() {  
    printf("bye\n");
}


// Write 2 fuctions- one to print(Student details) & second to print (subjects)
#include <stdio.h>  
void student(); 
void sub(); 

int main()
{
   student();  
   sub();

   return 0;
}

void student() {
    printf("Name : MRA\n Roll : 01\n Class : 10\n sec : A\n");
}

void sub() {
    printf(" Main sub is: \nPhy\n Che\n Bio\n Math");
}


// Write a function that prints Hi if user is England & bonjur if the user is french
#include <stdio.h>
void hi();
void bonjur();

int main()
{

    char ch;
    printf("enter E for England & F for Franch: ");
    scanf("%c", &ch);

    if (ch == 'E')
    {
        hi();
    }
    else if (ch == 'F')
    {
        bonjur();
    }
    else
    {
        printf("Invalied");
    }
    return 0;
}

void hi()
{
    printf("Hello\n");
}

void bonjur()
{
    printf(" Bonjur\n ");
}


// OR -- table of a number PROBLEM  
#include <stdio.h>
void printtable(int n);

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printtable(n); // Argument / actual Parameter

    return 0;
}


void printtable(int n) // Formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
       printf("%d\n", i * n);
    }
}


// Use library functions to calculate the square of a number given by user
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf ("Enter the value: ");
   scanf("%d", &n);
   printf ("%f", pow(n, 2)); // small to large store possible but large to small is tricky

    return 0;
}
//or
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 2;
    printf("value is: %f",  pow(n, 2));
    
    return 0;
}


// Write function to calculate area of a square, a circle & a rectangle
#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectagArea(float a, float b);

int main()

{
 
    float a = 4.0;
    float  b = 5.0;
    printf("Area is : %f\n", rectagArea( a, b));

    float side = 4;
    printf("Square area: %f\n", squareArea(side));

    float rad = 4;
    printf("Circle area : %f\n", circleArea(rad));

    return 0;
}

float squareArea(float side){
   return side * side;
}

float circleArea(float rad){
    return 3.1416 * rad *rad;
}

float rectagArea(float a, float b){
    return a * b;
}


// Sum of firt n numbers
#include <stdio.h>
int plus(int n);
int main()
{
    printf("plus is: %d", plus(6));
    
    return 0;
}
int plus (int n){
        if(n == 1){
            return 1;
        } 
    int sumNum1 = plus(n-1);
    int sumN = sumNum1 + n;
    return sumN;
}


// Factorial of n
#include <stdio.h>

int fact(int n);

int main()
{
    printf("fact is: %d", fact(7));
    return 0;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int factNum1 = fact(n - 1);
    int factN = factNum1 * n;

    return factN;
}


//WAF to calculate percentage of a student from marks in 3 subject
#include <stdio.h>

int calcPercentage(int science, int che, int bio );

int main()
{
    int science = 30;
    int che = 20;
    int bio = 40;
    printf("percentage is : %d",calcPercentage( science,  che,  bio ));

    return 0;
}

int calcPercentage(int science, int che, int bio ){
 return ((science + che + bio) / 3) ;
}


////WAF to print n terms of the fibonacci sequence
#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}
// OR
#include <stdio.h>

int fib(int n);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("fib of %d is: %d", n, fib(n));

    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int fibNum1 = fib(n - 1);
    int fibNum2 = fib(n - 2);
    int fibN = fibNum1 + fibNum2;

    return fibN;
}


// Write a function to convert celsius to farenheit
#include <stdio.h>
float changetem (float celsius);

int main()
{
    float far = changetem (30);
    printf("Temp is : %f", far);

    return 0;
}
float changetem (float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}

