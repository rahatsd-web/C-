// Dynamic Memeory Allocation -- it is a way to allocate memory to a data structure during the runtime 
// F# include <stdio.h>
int main(){
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
 
    return 0;
}

// MALLOC (Memeory location) -- takes number of byte to be allocated & returns a pointer of type void
# include <stdio.h>
# include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
                    //( Tottal number, Tottal size)

    ptr [0] = 1;
    ptr [1] = 3;
    ptr [2] = 5;
    ptr [3] = 7;
    ptr [4] = 9;

    for (int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }

    return 0;
}


// CALLOC (Continous allocation) -- initializes with 0
# include <stdio.h>
# include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) calloc(5, sizeof(float));
                    //( Tottal number, Tottal size)

    for (int i = 0; i < 5; i++){
        printf("%f\n", ptr[i]);
    }

    return 0;
}


// Free -- We use it to free memory that is allocated using malloc & calloc
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


// Realloc -- it (increase or decrease) memory using the same pointer & size
// ptr = realloc (ptr, newSize);
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(2 * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;

    ptr = realloc(ptr, 4 * sizeof(int));

    ptr[2] = 30;
    ptr[3] = 40;

    for(int i = 0; i < 4; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}
