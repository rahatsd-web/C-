// Print 1-100 by for loop
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 100; i = i + 1)
    {
        printf("%d \n", i);
    }

    return 0;
}

// Print 100-0 by for loop
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 100; i >= 0; i = i - 1)
    {
        printf("%d \n", i);
    }

    return 0;
}

// Print the number 0 -10
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 0; i <= 10; i = i + 1)
    {
        printf("%d \n", i);
    }

    return 0;
}

// Print the number 0 -10 floating value
#include <stdio.h>
#include <math.h>
int main()
{
    for (float i = 1.0; i <= 10.0; i += 1)
    {
        printf("%f \n", i);
    }

    return 0;
}

// Print the chrecter value
#include <stdio.h>
#include <math.h>
int main()
{
    for (char i = 'a'; i <= 'z'; i += 1)
    {
        printf("%c \n", i);
    }

    return 0;
}


// Print the number from 0 to n, if n is given by user
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
//or
// Print the number from 0 to n, if n is given by user
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for( int i = 0; i <= n; i++){
        printf("%d\n", i);
    }


    return 0;
}


// Print the sum of First n Natural nunmbers & count them reverse
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i<=n; i++)
    {
      sum += i;
    }

    printf("sum is %d\n", sum);

    for( int i = n; i>=1; i--)
    {
    printf(" %d\n", i);
    }
    return 0;
}


// Print the table of a number input by the user
#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("Enter the number :");
  scanf("%d", &n);

  for (int i = 1; i <= 10; i++)
  {
    printf(" %d\n", n * i);
  }

  return 0;
}


// Keep taking numbers as input from user until user enters an odd number
#include <stdio.h>
#include <math.h>
int main()
{
  int n;

  do
  {
    printf("enter the number:");
    scanf("%d", &n);
    printf("%d\n", n);

    if (n % 2 != 0)
    {
      break;
    }
  }while (1)
      ;

    return 0;
  }


// Keep taking numbers as input from user until user enters a number which is multiple of 7
#include <stdio.h>
#include <math.h>
int main()
{
  int n;

  do
  {
    printf("enter the number:");
    scanf("%d", &n);
    printf("%d\n", n);

    if (n % 7 == 0 ) // Mutiple of 7
    {
      break;
    }
  }while (1)
      ;

    return 0;
  }


// print all numbers from 1 - 10 except for 6
#include <stdio.h> 
#include <math.h>
int main()
{
  for (int i = 1; i <= 10; i ++)
  {
    if (i == 6)
    { 
      continue;
    }

    printf("%d\n", i);
  }

  return 0;
}


// print all the odd numbers from 5 to 55
#include <stdio.h> 
#include <math.h>
int main()
{
  for (int i = 5; i <= 55; i ++)
  {
    if (i %2 !=0)
    { 
    printf("%d\n", i);
    }
  }

  return 0;
}


// print the factorial of a number n
#include <stdio.h> 
#include <math.h>
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  int fac =1;
  for (int i = 1; i <= n; i ++)
  {
    fac = fac * i;
  }
  printf("%d\n", fac);
  return 0;
}


// print revere of the table for a number n
#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i = 10; i >=1; i--)
  {
    printf("%d\n", n*i);
  }

  return 0;
}


// Calculate the sum of numbers between 5 to 55

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 5; i <= 55; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}