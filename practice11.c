// WAP to allocate memory to store 5 prices 
# include <stdio.h>
# include <stdlib.h>

int main(){
    float *ptr; // Dynamically
    ptr = (float *) malloc(5 * sizeof(float)); // Allocatet memory from maloc
                        //( Tottal number, Tottal)
    ptr [0] = 1;
    ptr [1] = 3;
    ptr [2] = 5;
    ptr [3] = 7;
    ptr [4] = 9;

    for (int i = 0; i < 5; i++){
        printf("%f\n", ptr[i]);
    }

    return 0;
}


// WAP to allocate memory of size n, where n is entered by the user
# include <stdio.h>
# include <stdlib.h>

int main(){
    int *ptr;
    int n;
    
    printf("Enter n ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }

    return 0;
}


// WAP to free the memory allocated with calloc & malloc
// using calloc
# include <stdio.h>   
# include <stdlib.h>

int main(){
    int *ptr;
    int n;
    
    printf("Enter n :");   
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    free (ptr);

    ptr = (int *) calloc(2, sizeof(int));
     for (int i = 0; i < 2; i++){
        printf("%d\n", ptr[i]);
    }

    return 0;
}
// using malloc
# include <stdio.h>   
# include <stdlib.h>

int main(){
    int *ptr;
    int n;
    
    printf("Enter n :");   
    scanf("%d", &n);

    ptr = (int *) malloc(n* sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    free (ptr);

    ptr = (int *) malloc(2* sizeof(int));
     for (int i = 0; i < 2; i++){
        printf("%d\n", ptr[i]);
    }

    return 0;
}


// Allocate memory for 5 numbers, Then dynamically increase it to 8 numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(5 * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    ptr = realloc(ptr, 3 * sizeof(int));

    ptr[5] = 60;
    ptr[6] = 70;
    ptr[7] = 80;

    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}
// OR
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *) calloc(5 , sizeof(int));

    printf("Enter the numbers (5) : ");
    for(int i =0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter the numbers (8) : ");
    for(int i =0; i < 8; i++){
        scanf("%d\n", &ptr[i]);
    }
    
    //print
    for(int i =0; i < 8; i++){
        printf("number %d is %d\n", i, ptr[i]);
    }
    
    return 0;
}


// Create an array of size 5 (using calloc) & enter its values from the user
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *) calloc(5 , sizeof(int));

    printf("Enter the numbers (5) : ");
    for(int i =0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }
    
    //print
    for(int i =0; i < 5; i++){
        printf("number %d is %d\n", i, ptr[i]);
    }
    
    return 0;
}


// Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number
// Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *) calloc(5 , sizeof(int));
    ptr [0] = 1;
    ptr [1] = 3;
    ptr [2] = 5;
    ptr [3] = 7;
    ptr [4] = 9;
    
    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }
    
    free (ptr);

    ptr = realloc(ptr, 6 * sizeof(int));
    ptr [0] = 2;
    ptr [1] = 4;
    ptr [2] = 6;
    ptr [3] = 8;
    ptr [4] = 10;
    ptr [5] = 12;

    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }
    


    return 0;
}