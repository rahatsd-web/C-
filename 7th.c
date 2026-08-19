// ARRAYS -- collection of simular data typs stored at coniguous memory locations
#include <stdio.h>

int main()
{   int marks1 = 97;
    int marks2 = 98;
    int marks3 = 89;

    int marks[] = {97, 98, 89};     // ARRAY
 
    return 0;
}


///

#include <stdio.h>

int main()
{   int marks[3];
    printf("Enter phy = ");
    scanf("%d", &marks[0]);

    printf("Enter che = ");
    scanf("%d", &marks[1]);

    printf("Enter math = ");
    scanf("%d", &marks[2]);

    printf("phy = %d, che = %d, math = %d", marks[0], marks[1], marks[2]);

    return 0;
}


// Inititaization of ARRAY
#include <stdio.h>

int main()                         
{   float product[3] = {100.0, 200.0, 300.0};
    float product[] = {100.0, 200.0, 300.0};      // Both are correct       

    printf("Total price 1 : %f\n", product[0]+(0.18*product[0]));
    printf("Total price 2 : %f\n", product[1]+(0.18*product[1]));
    printf("Total price 3 : %f\n", product[2]+(0.18*product[2]));


    return 0;
}


// Pointer Arithmetic -- Poiinter can be incremented & decremented, We can compare 2 pointers & subtract one pointer from another
// int stores 4 byte, che stores 1 byte, float stores 4 byte, double stores 8 byte

//int value 4
#include <stdio.h>

int main()                         
{  int age =22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;                    //incremented
    printf("ptr = %u\n", ptr);
    ptr--;                    //decremented
    printf("ptr = %u\n", ptr);
 
    return 0;
}

// Float value 4
#include <stdio.h>

int main()                         
{  float age =20.0;
    float *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
 
    return 0;
}

// Char value 1
#include <stdio.h>

int main()                         
{  char star = "*";
    char *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
 
    return 0;
}

// Difference & Comparison
#include <stdio.h>

int main()                         
{  
    int age = 20;
    int _age = 21;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u ,%uDifference = %u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &age;
    printf("Comparison = %u\n", ptr == _ptr);

    return 0;
}


// Array is a pointer
#include <stdio.h>

int main()                         
{  int pass[5];
    //input
    int * ptr = &pass[0];
    for(int i=0; i<5; i++){
        printf("%dindex : ", i);
        scanf("%d", (ptr+i));

    }
 //output
 for(int i = 0; i<5; i++){
    printf("%d index = %d\n", i, *(ptr+i));
 }
    return 0;
}


//Array as Function Argument
#include <stdio.h>
void printNumbers(int arr[], int n);
int main()                         
{  
    int arr[] = {2, 3, 4, 5, 6};
    printNumbers(arr, 5);
    return 0;
}
void printNumbers(int arr[], int n){
    for (int i = 0; i < n; i ++)
    {
        printf("%d \t", arr[i]);
    }

    printf("\n");
}


// Multidimensional Arrays 2d, 3d, infini
// Array is a pointer
#include <stdio.h>

int main()                         
{  
    int marks [2][3];
    marks[0][0] = 90;
    marks[0][1] = 80;
    marks[0][2] = 70;

    marks[1][0] = 90;
    marks[1][1] = 80;
    marks[1][2] = 70;

    printf("%d", marks[1][1]);

    return 0;
}



