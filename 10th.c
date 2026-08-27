// FILE IO -- Container in a storage device to store data / Files are used to persist the data
// Create, Open, Read, Write, Close
// Types of file -- Text file(.txt, .c) & Binary file(.exe, .mp3, .jpg)

#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "r"); // file name & mode

    fclose(fptr);
    return 0;
}


// File opening modes [ "r", "rb", "w", "wb", "a"] (rb/wb = open to read/write in binary ) ( a = open to apppend)

// Reading carecter  from a file  < fscanf(fptr, "%c", &ch); >
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);

    fclose(fptr);
    return 0;
}

// Reading Int from a file
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


// Writing to a file < fprintf (fptr, "%c", ch); > 
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "w");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c\n", 'O');

    fclose(fptr);
    return 0;
}

// for making value double use append mode (a)
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "a");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    return 0;
}


// Read & Write a char
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fclose(fptr);
    return 0;
}
// &
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "w");

    fputc('M', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);
    fclose(fptr);
    return 0;
}


// EOF -- fgetc returns EOF to show that the file has ended  (EOF is like null)
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("Test.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    prinf("\n");

   
    fclose(fptr);
    return 0;
}
