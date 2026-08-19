// WAP to enter price of 3 item & print their final cost with gst
#include <stdio.h>

int main()                         
{   int product[3];               
    printf("1st product = ");
    scanf("%d", &product[0]);

    printf("2nd product = ");
    scanf("%d", &product[1]);

    printf("3rd product = ");
    scanf("%d", &product[2]);

    printf("Total price 1 : %f", product[0]+(0.18*product[0]));
    printf("Total price 2 : %f", product[1]+(0.18*product[1]));
    printf("Total price 3 : %f", product[2]+(0.18*product[2]));


    return 0;
}

//or

#include <stdio.h>

int main()                         
{   float product[3];                 // Using single variable by array 
    printf("enter 3 product = ");
    scanf("%f", &product[0]);
    scanf("%f", &product[1]);
    scanf("%f", &product[2]);


    printf("Total price 1 : %f\n", product[0]+(0.18*product[0]));
    printf("Total price 2 : %f\n", product[1]+(0.18*product[1]));
    printf("Total price 3 : %f\n", product[2]+(0.18*product[2]));


    return 0;
}


// WAF to count the number of odd numbers in an array
#include <stdio.h>
int countOdd(int arr[], int n);
int main()                         
{  
   int arr[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
   printf("%d", countOdd(arr, 10));
    return 0;
}
int countOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] % 2 != 0){
            count++;
        }

    }

    return count;
}


// Find the value inside of array
#include <stdio.h>
int countOdd(int arr[], int n);
int main()                         
{  
   int arr[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
   printf("%d\n", *(arr+2));
   printf("%d\n", *(arr+0));
   printf("%d\n", *(arr+4));
   printf("%d\n", *(arr+8));
   printf("%d\n", *(arr+3));
   printf("%d\n", *(arr+6));
   printf("%d\n", *(arr+1));
   printf("%d\n", *(arr+20));
    return 0;
}
int countOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] % 2 != 0){
            count++;
        }

    }

    return count;
}


// WAF to reverse an array
#include <stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    reverse(arr, 5);
    printArr(arr, 5);

    return 0;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];

        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}


// WAP to store the first n fibonacci number
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of Fibonacci terms: ");
    scanf("%d", &n);

    int fib[n];

    // First two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Generate remaining numbers
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];  // IMPORTANT Problem
    }

    // Print Fibonacci series
    printf("Fibonacci series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", fib[i]);
    }

    return 0;
}


//  Create a 2d  array, storing the table of 2 & 3
#include <stdio.h>

int main()
{
    int arr[2][10];

    for(int i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);   // Table of 2
        arr[1][i] = 3 * (i + 1);   // Table of 3
    }

    printf("Table of 2:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[0][i]);
    }

    printf("\nTable of 3:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[1][i]);
    }

    return 0;
}