// Check if a file exists before reading from it
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("NewTest.txt", "w"); // It will create a new file autometically 
    if(fptr == NULL){
        printf("File not exist\n");
    }
    else{
        printf("File is exist");
    }

    fclose(fptr);
    return 0;
}


// Make a program to read 5 int froma file
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("NewTest.txt", "r");

    int ch;
    fscanf(fptr, "%d", &ch);
    printf("Charecter = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Charecter = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Charecter = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Charecter = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Charecter = %d\n", ch);
   
    fclose(fptr);
    return 0;
}


// Make a program to input student information from a user & enter it to a file
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "w");
    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter cgpa : ");
    scanf("%d", &cgpa);

    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", age);
    fprintf(fptr, "%f\n", cgpa);
    
    fclose(fptr);
    return 0;
}


// Write a program to write all the odd numbers from 1 to n in a file
#include <stdio.h>

int main()
{
    int n, i;
    FILE *fp;

    printf("Enter n: ");
    scanf("%d", &n);

    fp = fopen("odd_numbers.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    for (i = 1; i <= n; i += 2)
    {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);

    printf("Odd numbers have been written to the file.\n");

    return 0;
}