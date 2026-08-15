/* Write a C program to demonstrate the use of pointers. Declare an integer variable x and an integer pointer ptr. 
Assign the address of x to ptr, initialize the value of x using the pointer, 
then perform arithmetic operations (addition and increment) through the pointer. 
Display the value of both x and *ptr after each operation. */
#include <stdio.h>
int main(){
int *ptr;
int x;

ptr = &x;
*ptr = 0;

printf(" x is : %d\n", x);
printf(" *ptr is : %d\n", *ptr);

*ptr = *ptr + 5; // Adding op
printf(" Adding x is : %d\n", x);
printf(" Adding *ptr is : %d\n", *ptr);

(*ptr)++; // Increment op
printf(" Adding x is : %d\n", x);
printf(" Adding *ptr is : %d\n", *ptr);

return 0;
}


// valu of random varaible
#include <stdio.h>
int main()
{
 int age = 22;
 int  *ptr = &age;
 int **pptr = &ptr;

 printf("%d\n", age); 
 printf("%d\n", *ptr); 
 printf("%d\n", **pptr); 

    return 0;
}


/* Swap 2 number, a & b  [ for swap need empty variable ]
                         [ t=a, a=b, b=t; / t=b, b=a, a=t] */
#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{   int x = 3;
    int y = 5;
    _swap (&x, &y);
    printf("x =%d &  y= %d\n", x, y );

    return 0;
}
void _swap(int *a, int *b){  // call by reference
    int t = *a;
    *a = *b;
    *b = t;
}


void swap(int a, int b){   // call by VALUE
    int t = a;
    a = b;
    b = t;
    printf("a =%d & b = %d\n", a, b );
}


// Will the address output be same?
#include <stdio.h>

void printAddress(int *n);

int main()
{
    int n = 4;

    printAddress(&n);

    printf("Address of n is: %u\n", &n);

    return 0;
}

void printAddress(int *n)
{
    printf("Address received: %u\n", n);
}


// WAF to calculate the sum, product 7 average of 2 numbers. Print the average in thee main function.
#include <stdio.h>

void sumNumber(int a, int b, int *sum, int *product, int *average);

int main()
{
    int a = 4, b = 3;
    int sum, product, average;
    sumNumber(a, b, &sum, &product, &average);
    printf("sum is = %d\n Product is = %d\n, average is = %d ", sum, product, average );


    return 0;
}
void sumNumber(int a, int b, int *sum, int *product, int *average){
    *sum = a + b;
    *product = a * b;
    *average = *sum / 2;

}
