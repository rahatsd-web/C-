// LOOP control instruction --- It used to repeat a block of code multiple times until a particular condition changes.
// FOR, WHILE, DO-WHILE
// for(initialisation; condition; updation){   whatever u want to print  }

#include <stdio.h>  //IF, Else
#include <math.h>
int main()
{
   for(int i = 1; i <= 5; i = i + 1){
    printf("I am jeck\n");
   }

   return 0;
}

/// increent operator ( ++i, i++ )
#include <stdio.h>  //IF, Else
#include <math.h>
int main()
{
    int i = 1;
    printf("%d\n",  i++); // use then increase Pree incrementop
    printf("%d\n", i);

        printf("%d\n",  ++i); // increase then use Post incrementop
    printf("%d\n", i);

   return 0;
}
/// decrement operator ( --i, i-- )
#include <stdio.h>  //IF, Else
#include <math.h>
int main()
{
    int i = 1;
    printf("%d\n",  i--); // use then increase Pree decrementop
    printf("%d\n", i);

        printf("%d\n",  --i); // increase then use Post decrementop
    printf("%d\n", i);

   return 0;
}

// INFINITE Loop
#include <stdio.h>  //IF, Else
#include <math.h>
int main()
{                               // Wrong way of coding
   for(int i = 1; ; i = i + 1){
    printf("Hello World\n");
   }

   return 0;
}


// WHILE Loop
#include <stdio.h> 
#include <math.h>
int main()
{   
   int i = 1;                          
   while (i  <= 5){
    printf("hello world");
    i+=1;
   }

   return 0;
}


// DO-WHILE Loop
#include <stdio.h> 
#include <math.h>
int main()
{  
   int i = 10; 
   do{
        printf("%d\n", i);
        i++;
    }
     while (i >= 0);
   return 0;
}
//or
#include <stdio.h> 
#include <math.h>
int main()
{  
   int i = 10; 
   do{
        printf("%d\n", i);
        i--;
    }
     while (i >= 0);
   return 0;
}


// BREAK Statement  --  Exit the loop
#include <stdio.h> 
#include <math.h>
int main()
{
  for (int i = 1; i <= 5; i = i + 1)
  {
    if (i == 3)
    {
      break;
    }

    printf("%d\n", i);
  }

  return 0;
}


// CONTINUE statement -- skip to next iteration
#include <stdio.h> 
#include <math.h>
int main()
{
  for (int i = 1; i <= 5; i = i + 1)
  {
    if (i == 3)
    {
      continue;;
    }

    printf("%d\n", i);
  }

  return 0;
}
