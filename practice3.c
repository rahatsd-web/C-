// WAP to check if a  student passed or failed

#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int mark;
    printf("Enter the marks :");
    scanf("%d", &mark);

    if (mark > 30)
    {
        printf("Passed");
    }
    else
    {
        printf("failed");
    }

    return 0;
}

// or
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int mark;
    printf("Enter the marks :");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 30)
    {
        printf("Failed\n");
    }

    else if (mark > 30 && mark <= 100)
    {
        printf("Passed\n");
    }

    else
    {
        printf("Wrong number\n");
    }


    return 0;
}

// or

#include <stdio.h> // TERNARY
#include <math.h>
int main()
{
    int mark;
    printf("Enter the marks :");
    scanf("%d", &mark);

    mark > 30 ? printf("Pased\n") : printf("Failed\n");

    return 0;
}


// WAP to give grades to a student 
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int marks;
    printf("Enter the marks :");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("Mark is F\n");
    }
    else if (marks > 30 && marks <= 70)
    {
        printf("Mark is B\n");
    }
    else if (marks > 70 && marks <= 90)
    {
        printf("Mark is A\n");
    }
    else if(marks > 90 && marks <= 100)
    {
        printf("Mark is A+\n");
    }
    else
    {
        printf("Wrong Number");
    }

        return 0;
}

//or

#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int marks;
    printf("Enter the marks :");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Mark is A+\n");
    }
    else if (marks >= 70)
    {
        printf("Mark is A\n");
    }
    else if (marks >= 50)
    {
        printf("Mark is B\n");
    }
    else if (marks >= 30)
    {
        printf("Mark is C\n");
    }
    else
    {
        printf("Result is Fail");
    }

    return 0;
}


// Equal or not
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int x = 2;
    if (x=1){
        printf("x is equal to 1");
        printf("%d", x);
    }
    else 
    {
        printf("x is not equal to 1");
    }

        return 0;
}
// OR
// Equal or not
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int x = 2;
    if (x=1){
        printf("x is equal to 1");
    }
    else 
    {
        printf("x is not equal to 1");
    }

        return 0;
}


// WAP to find if a charecter entred by user is upper case or not
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
   char x;
   printf("Enter the Charecter : ");
   scanf("%C", &x);

   if(x >= 'A' && x <= 'Z'){
    printf("Upper case");
   }
   else if (x >= 'a' && x <= 'z')
   {
    printf("Lower case");
   }
   else
   printf("Not valid");

        return 0;
}