// STRUCTURES [ V I P ] -- A collection of value of different data types 
// Structures in memory -- this are stored in contiguous memory location
#include <stdio.h>
#include <string.h>

// User defined
struct student{
    char name [100];  // STRUCTURE 
    int roll;
    float cgpa;
};
int main()
{
    struct student s1;
    //s1.name = "Rahat";  -> can't change array notation if it's a pointer, then it is possible.
    strcpy(s1.name, "Rahat");
    s1.roll = 64162;
    s1.cgpa = 3.39;

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}


// Array of structures -- [ Data type > Variable > Quantity ]
#include <stdio.h>
#include <string.h>

struct student{
    char name [100]; 
    int roll;
    float cgpa;
};
int main()
{
    struct student ece[100]; // deta type > Variable > array size
    strcpy(ece[0].name, "Rahat");
    ece[0].roll = 64162;
    ece[0].cgpa = 3.39;

    printf("student name = %s\n", ece[0].name);
    printf("student roll = %d\n", ece[0].roll);
    printf("student cgpa = %f\n", ece[0].cgpa);

    return 0;
}


// Initializing Structures
#include <stdio.h>
#include <string.h>

struct student{
    char name [100]; 
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = { "Rahat", 01, 4.00};
    struct student s2 = {"Alok", 11, 3.70};
    struct student s3 = {0};
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s2.roll);
    //printf("student cgpa = %f\n\n", s3.cgpa);
    return 0;
}


//Pointers to Structures
#include <stdio.h>
#include <string.h>

struct student{
    char name [100]; 
    int roll;
    float cgpa;
};
int main()
{
 struct student s1 = { "Rahat", 01, 4.00};
 printf("student name = %s\n", s1.name);

 struct student *ptr = & s1;
 printf("student name = %s\n", (*ptr).name); // (*ptr) points hole variable <struct student s1 = { "Rahat", 01, 4.00};> & ((*ptr).name) points perameter <only name>

    return 0;
}

  
// Arrow Operator ^ ^ ^
#include <stdio.h>
#include <string.h>

struct student{
    char name [100]; 
    int roll;
    float cgpa;
};
int main()
{
 struct student s1 = { "Rahat", 01, 4.00};
 printf("student name = %s\n", s1.name);

 struct student *ptr = & s1;
 printf("student name with pointer= %s\n", (*ptr).name);
 printf("student name with arrow pointer= %s\n", ptr->name);
    return 0;
}


// Passing structure to function
#include <stdio.h>
#include <string.h>

struct student{
    char name [100]; 
    int roll;
    float cgpa;
};
void printinfo(struct student s1);

int main()
{
 struct student s1 = { "Rahat", 01, 4.00};
 printinfo(s1);
    return 0;
}
void printinfo(struct student s1){
    printf("student information : \n");
    printf("student.name  = %s\n", s1.name);
    printf("student.roll  = %d\n", s1.roll);
    printf("student.cgpa = %f\n", s1.cgpa);
}


// TYPEDEF keyword -- used to create alias for data types
#include <stdio.h>
#include <string.h>

typedef struct student{
    char name [100]; 
    int roll;
    float cgpa;
} stu;

int main()
{   
    stu s1;    // used for make variable name short
    strcpy(s1.name, "Rahat");
    s1.roll = 64162;
    s1.cgpa = 3.39;

    printf("student name is = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);


    return 0;
}
 
