// CONDITIONAL STATEMENT  (2nd -- Decision Control ( IF, ELSE ))
// IF, ELse-if, Else

#include <stdio.h>  //IF, Else
#include <math.h>
int main()
{
   int age;
   printf("Enter age :");
   scanf("%d", &age);
   
   if(age > 18){
    printf("Is Adult\n");
    printf("They can vote\n");
    printf("They can drive\n");
   }

   else{
    printf("Is Young");
    printf("They can't vote\n");
    printf("They can't drive\n");
   }
   
   printf("Thank You");

   return 0;
}

#include <stdio.h> // Curly bracket is not maindatory for single statement
#include <math.h>
int main()
{
   int age;
   printf("Enter age :");
   scanf("%d", &age);
   
   if(age > 18)
    printf("Is Adult\n");

   else
    printf("Is Young\n");

   
   printf("Thank You");
   
   return 0;
}

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
    else if (marks >= 60)
    {
        printf("Mark is B+\n");
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

// Nested IF
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Number is Positive");
        if (num % 2 == 0){
            printf("Number is Even");
        }
        else{
            printf("Number is odd");
        }
    }
    else {
        printf(" Number is Negative");

    }
    

    return 0;
}

// Conditional Operators --- (2nd.C)

//TERNARY -->  [ Condition? do something if TRUE : Do something if FALSE]
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int age;
   printf("Enter age :");
   scanf("%d", &age);
   
  age >= 18 ? printf("Adult \n") : printf("Not adult\n"); 


    return 0;
}

// SWITCH -- used to choose one action from several possible options based on the value of an expression.
// Switch properties -- Case can be in any order, Nested switch are allowed
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    int day;
    printf("Enter day (1-7):");
    scanf("%d", &day);
    
    switch (day)
    {
    case 1:
        printf("Sunday\n");
              break;
    case 2:
        printf("Mnday\n");
              break;
    case 3:
        printf("Tuesday\n");
              break;
    case 4:
        printf("Wedday\n");
              break;
    case 5:
        printf("Thuday\n");
              break;
    case 6:
        printf("Fridayn");
              break;
    case 7:
        printf("Satday\n");
              break;
    default:
        printf("Not a valid day");    
    }

    return 0;
}
// Same^
#include <stdio.h> // Else-if
#include <math.h>
int main()
{
    char day;
    printf("Enter day (1-7):");
    scanf("%c", &day);
    
    switch (day)
    {
    case 'a':
        printf("Sunday\n");
              break;
    case 'b':
        printf("Mnday\n");
              break;
    case 'c':
        printf("Tuesday\n");
              break;
    case 'd':
        printf("Wedday\n");
              break;
    case 'e':
        printf("Thuday\n");
              break;
    case 'f':
        printf("Fridayn");
              break;
    case 'g':
        printf("Satday\n");
              break;
    default:
        printf("Not a valid day");    
    }

    return 0;
}
