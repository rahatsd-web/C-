// PPOINTERS -- A varriable that stores the memory addresss of another variable
// (* for value ) (& for address )
#include <stdio.h>

int main()
{
 int age = 22;
 int  * ptr = &age;
 int _age = *ptr;

 printf("Value of pointer is : %d", age); 
    return 0;
}


// Declaring pointers ( int * ptr;  char * ptr; float * ptr)
// Format specifier ( printf("%p", &age); printf("%p", ptr); printf("%p", &ptr);)
#include <stdio.h>

int main()           // Address printing
{
 int age = 22;
 int  * ptr = &age;

 printf("%p\n", &age); 
  printf("%p\n", &ptr); 

    return 0;
}
// &
#include <stdio.h>
int main()           // Address printing -- it shows Hexadecimal but convert it unsigned value
{
 int age = 22;
 int  * ptr = &age;

 printf("%d\n", age); // Hexadecimal
 printf("%d\n", *ptr );  // Unsigned
 printf("%d\n", *(&age));

    return 0;
}


// Pointer to Pointer -- A variable that stores the memory address of another pointer
// Declaring pointers to pointer ( int ** pptr;  char ** pptr; float ** pptr)
#include <stdio.h>
int main()
{
 int age = 22;
 int  *ptr = &age;
 int **pptr = &ptr;

 printf("%d\n", **pptr);  // for vaoue
  printf("%d\n", &ptr); // for address

    return 0;
}


// Pointers in Function Call -- mean passing the address of a variable to a function instead of passing its value. This allows the function to modify the original variable.
// Pointers in Function Call -- (Call by Value) (call by Reference)

// (Call by Value) -- We pass value of variable as argument
#include <stdio.h>

void square (int n);
int main()
{   
    int number = 4;
    square (number);
    printf("Number is : %d", number);


    return 0;
}
//call by value
void square (int n){
    n = n * n;
    printf ( "Square is : %d\n", n);
}

//(call by Reference) -- We pass address of variable as argument
#include <stdio.h>

void square (int n);
void _square (int *n);

int main()
{   
    int number = 4;
    square (number);
    printf("Number is : %d\n", number);

    _square (& number);
    printf("Number is : %d\n", number);


    return 0;
}
//call by value
void square (int n){
    n = n * n;
    printf ( "Square is : %d\n", n);
}

void _square (int *n){
    *n = (*n) * (*n);
    printf ( "Square is : %d\n", *n);
}