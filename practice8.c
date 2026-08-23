// Create a string firstname & lastname to store details of user & print all the charecters using loop
#include <stdio.h>

void printString(char arr[]);
int main()                         
{  
    char firstName[] = "Rahat";
    char lastName[] = "Ahmed"; 

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}


// Ask the user to enter their firstName & print it back to them also try this with their fullName
#include <stdio.h>

void printString(char arr[]);
int main()
{
    // char firstName[50];
    // scanf("%s", firstName);
    // printf("Your name is %s", firstName);

    char fullName[100];
    printf("Enter the name :");
    scanf("%s", fullName);
    printf("Your name is %s", fullName);
    //printString(fullName);


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


// Make a program that inputs user's name & print it's length
#include <stdio.h>
void printString(char arr[]);
int countlength(char arr[]);

int main()
{

    char name [100];
    fgets (name, 100, stdin);
    printf("length is : %d", countlength(name));
 

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


// Take a string input fro the user using %c
#include <stdio.h>
#include <string.h>


int main()
{
   char str [100];
   char ch;
   int i = 0;

   while( ch != '\n'){
    scanf("%c", &ch);
    str[i] = ch;
    i++;
   }
    str[i] = '\0';
    puts(str);
}


// WAF to count the occurrence of vowels in a string
#include <stdio.h>
#include <string.h>

int countVowels(char str[])
{
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Number of vowels = %d", countVowels(str));

    return 0;
}
