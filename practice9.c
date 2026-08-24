// WAP to store the data of 3 student
#include <stdio.h>
#include <string.h>

// User defined
struct student1{
    char name [100];  // STRUCTURE 
    int roll;
    float cgpa;
};

struct student2{
    char name [100];  // STRUCTURE 
    int roll;
    float cgpa;
};

struct student3{
    char name [100];  // STRUCTURE 
    int roll;
    float cgpa;
};

int main()
{
    struct student1 s1;
    strcpy(s1.name, "Rahat");
    s1.roll = 664162;
    s1.cgpa = 3.39;

    printf("student1 name = %s\n", s1.name);
    printf("student1 roll = %d\n", s1.roll);
    printf("student1 cgpa = %f\n\n", s1.cgpa);

    struct student2 s2;
    strcpy(s2.name, "Rafi");
    s2.roll = 664187;
    s2.cgpa = 3.33;

    printf("student2 name = %s\n", s2.name);
    printf("student2 roll = %d\n", s2.roll);
    printf("student2 cgpa = %f\n", s2.cgpa);

    struct student2 s3;
    strcpy(s3.name, "Niloy");
    s3.roll = 664150;
    s3.cgpa = 3.10;

    printf("student3 name = %s\n", s3.name);
    printf("student3 roll = %d\n", s3.roll);
    printf("student3 cgpa = %f\n", s3.cgpa);

    return 0;
}


// Enter address (house no, block, city, state) of 5 people
#include <stdio.h>
#include <string.h>

typedef struct address{
    char city[100]; 
    char state[100];
    int block;
    int houseNo;
} Address;

void printAdd(Address add);

int main()
{   
    Address adds[5];

    printf("Enter info for 1 person :\n");
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    scanf("%d", &adds[0].block);
    scanf("%d", &adds[0].houseNo);

    printf("Enter info for 2 person :\n");
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);
    scanf("%d", &adds[1].block);
    scanf("%d", &adds[1].houseNo);

    printf("Enter info for 3 person :\n");
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);
    scanf("%d", &adds[2].block);
    scanf("%d", &adds[2].houseNo);

    printf("Enter info for 4 person :\n");
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);
    scanf("%d", &adds[3].block);
    scanf("%d", &adds[3].houseNo);

    printf("Enter info for 5 person :\n");
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);
    scanf("%d", &adds[4].block);
    scanf("%d", &adds[4].houseNo);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(Address add)
{
    printf("Address is: %s, %s, %d, %d\n",
           add.city,
           add.state,
           add.houseNo,
           add.block);
}


// Create a structures to store vectors. Then make a function to return sum of 2 vactors
#include <stdio.h>

typedef struct vector {
    int x;
    int y;
} Vector;

Vector sumVector(Vector v1, Vector v2);

int main()
{
    Vector v1, v2, sum;

    printf("Enter first vector (x y): ");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Enter second vector (x y): ");
    scanf("%d %d", &v2.x, &v2.y);

    sum = sumVector(v1, v2);

    printf("Sum of vectors = %di + %dj\n", sum.x, sum.y);

    return 0;
}

Vector sumVector(Vector v1, Vector v2)
{
    Vector result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}


// Create a structure to store complex numbers. (use arrow operator)
#include <stdio.h>

typedef struct complex {
    int real;
    int imaginary;
} Complex;

int main()
{
    Complex num;

    Complex *ptr = &num;

    printf("Enter real part: ");
    scanf("%d", &ptr->real);

    printf("Enter imaginary part: ");
    scanf("%d", &ptr->imaginary);

    printf("Complex number is: %d + %di\n", ptr->real, ptr->imaginary);

    return 0;
}


//you have to store the marks of 30 students in class. 
#include <stdio.h>

typedef struct student {
    char name[50];
    int marks;
} Student;

int main()
{
    Student students[30];

    for(int i = 0; i < 30; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    printf("\n--- Student Marks ---\n");

    for(int i = 0; i < 30; i++)
    {
        printf("%s got %d marks\n",
               students[i].name,
               students[i].marks);
    }

    return 0;
}


// make a structure to store bank account information of a customer of "ABC" bank, also make an akies for it
#include <stdio.h>

typedef struct bankAccount {
    char name[50];
    int accountNo;
    float balance;
} Account;

int main()
{
    Account customer;

    printf("Enter customer name: ");
    scanf("%s", customer.name);

    printf("Enter account number: ");
    scanf("%d", &customer.accountNo);

    printf("Enter balance: ");
    scanf("%f", &customer.balance);

    printf("\n--- ABC Bank Account Information ---\n");

    printf("Name: %s\n", customer.name);
    printf("Account Number: %d\n", customer.accountNo);
    printf("Balance: %.2f\n", customer.balance);

    return 0;
}
