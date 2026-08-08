// Bydefault code for c !!!   

/* in terminal ((gcc 1st.c ---here gcc is a compilar of c))
./a.out (( a is a default file which is created automatically and its extention is .out))*/

// Program structure::
#include <stdio.h>             // #include is a preprocessor directive. It tells the compiler to include a file before compiling the program               
int main()                      // This is the starting point of every C program. When you run a C program, execution always begins from main().
{                                // Curly Braces -- Everything inside the braces belongs to the function.
    printf("Hello World");        // This is an executable statement.
    return 0;                      // This ends the main() function. Meaning: "Program finished successfully."
}


// Variables -- it is the name of a meemory location which stores some data
#include <stdio.h>
int main()
{
    int num = 25;
    char stat = "*";
    int age = 22;
    float pi = 3.1416;

    // case sensitive
    int a = 10;
    int A = 20;

    // 1st cha is alpha or __
    int a = 10;
    int __a = 10;

    // no comma or blank space
    int final_prise = 50;

    return 0;
}


// Variable DATATYPES
#include <stdio.h>
int main()
{
    int age = 22;
    float pi = 3.1416;
    char slash = "#";

    return 0;
}


// keywords -- Reserved (32 keywords in C) words that have special meaning to the compiler
#include <stdio.h>
int main()
{
    // CASES..... { %d %f %c -- r known as formet specifire }

    int age = 22;
    float pi = 3.1416;
    char star = '*';

    // integers
    printf("age is %d\n", age);

    // real numbers
    printf("Value of PI is %f\n", pi);

     // characters
    printf("Star looks like this %c", star);

    return 0;
}


// INPUT -- It means taking data from the user.
#include <stdio.h>
int main()
{
   int age;
   printf("Enter age : ");
   scanf("%d", &age);
   printf("MF your age is : %d", age);
   return 0;
}

/* COMPILATION -- A computer program that translates C code into machine code 
  
<< C Code  →  Compiler  →  Machine Code  →  Run Program >> 

A C program goes through 4 main stages:  
  Source Code (.c)
        |
        ↓
1. Preprocessing
        |
        ↓
2. Compilation
        |
        ↓
3. Assembly
        |
        ↓
4. Linking
        |
        ↓
Executable File (.exe)*/