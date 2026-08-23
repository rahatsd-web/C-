// STRING -- A character array terminated by a "\0" (null character)
#include <stdio.h>

int main()                         
{  
    char name[] = {'r','a','h','a','t','\0'};   // single codes
    char name[] = {"rahat"};   // string
    return 0;
}



// String Format Specifire << %s -- specially for string >>
void printString(char arr[]);
int main()                         
{  
    char name[50];
    scanf("%s", name);
    frintf("Your name is %s", name);

    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

}


// scanf() can't input muti-word strings with spaces ( gets & put (str) )
#include <stdio.h>

void printString(char arr[]);
int main()
{

    char str[100];
    gets(str);     // Dangerous & Outdated
    puts(str);

    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}


// fgets() aulternative of gets()

#include <stdio.h>

int main()
{

    char str[100];
    fgets(str, 100, stdin);
    puts(str);          /// It will create new line autometically

    return 0;
}


// String using Pointers
#include <stdio.h>

int main()
{

    char *canChange = "hello World";
    puts(canChange);
    canChange = "hello";
    puts(canChange);

    char *cannotChange = "Hello World";
    puts(cannotChange);
    cannotChange = "Hello";

    return 0;
}


// Standard library Function -- Count number of charecters excluding '\0'
#include <stdio.h>
#include <string.h>

void printString(char arr[]);
int countlength(char arr[]);

int main()
{
    char name[] = "rahat";
    int length = strlen(name);
    printf("length is : %d", length);
 
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int countlength(char arr[]){
    int count = 0 ;
    for (int i = 0; arr[i] != '\0'; i++)
    {   
        count++;
    }
       return count;
}


// OLD & NEW str -- copies value of old string to new string
#include <stdio.h>
#include <string.h>

int main()
{
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy (newStr, oldStr);
    puts(newStr);

    return 0;
}


// 1ststr, 2ndstr -- concatenates first string with second string
#include <stdio.h>
#include <string.h>

int main()
{
    char firstStr[100] = "Hello ";
    char secoStr[] = "world";
    strcat (firstStr, secoStr);
    puts(firstStr);

    return 0;
}


// CMP -- Comprares 2 string & returns a value
#include <stdio.h>
#include <string.h>

int main()
{
    // char firstStr[] = "Apple ";
    // char secoStr[] = "Banana";
    char firstStr[] = "hhh";
    char secoStr[] = "hhh";
    //printf( "%d",  strcmp(firstStr, secoStr)); -1
    //printf( "%d",  strcmp(secoStr, firstStr));   +1
    //printf( "%d",  strcmp(firstStr, secoStr));   0
    return 0;
}



