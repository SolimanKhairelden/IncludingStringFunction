#include <stdio.h>
#include <stdlib.h>

#include "strcat.h"
#include "strchr.h"
#include "strcmp.h"
#include "strcpy.h"
#include "strlen.h"
#include "strncat.h"
#include "strncmp.h"
#include "strncpy.h"
#include "strrchr.h"


#define SIZE 40


/*
*************************************************************************************************
    ** Author: Soliman Mohammed Awad Khairelden

    ** Email: solimnawad@gmail.com

    ** Time of beginning: 17th Aug 2020
    ** Time of accomplished : 17th Aug 2020


*************************************************************************************************

*/



/* Beginning of All definitions we will use ----------------------------------------------------*/

//const char *colors[] = {"Red","Orange","Yellow","Green","Blue","Purple" };
//const char *widths[] = {"Thin","Medium","Thick","Bold" };

//char strg1[40], strg2[40];      /* Declaration for strcat function*/

char strg1[50], strg2[50];      /* Declaration for strcmp && strcat function*/


char buffer1[SIZE] = "computer program"; /* Declaration for  strchr  function*/
char * ptr;                             /* Declaration for  strchr  function*/
int    ch ;                        /* Declaration for  strchr  function*/


char ch_arr1[20];               /* Declaration for strcpy function*/
char ch_arr2[20];               /* Declaration for strcpy function*/

int len;                        /* Declaration for strlen function*/
char destination[30];           /* Declaration for strlen function*/

char src1[50] = "world";     /* Declaration for strncat function*/
char dest1[50]= "Hello";         /* Declaration for strncat function*/

char str1[10] = "aksh";         /* Declaration for strncmp function*/
char str2[10] = "akash";        /* Declaration for strncmp function*/


char Str1[20];                  /* Declaration for strncpy function*/
char Str2[25];                  /* Declaration for strncpy function*/

char string[] = "Embedded for Embedded"; /* Declaration for strrchr function*/
char character = 'd';              /* Declaration for strrchr function*/



/* End of All definitions we will use ----------------------------------------------------*/


int main()
{

    /* Beginning of Using strcat function----------------------------------------------------*/
    /*This function is used to concatenate two strings*/

    printf("Strcat function to concatenate two strings\n");
    printf("Enter first string: ");
    gets(strg1);

    printf("Enter second string: ");
    gets(strg2);

    //printf("\nConcatenating first and second string .. \n\n");
    strcat(strg1, strg2);

    printf("First string: %s\n", strg1);
    printf("Second string: %s\n", strg2);

    printf("----------------------------------------------------\n");

    /* Ending of Using strcat function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/


    /* Beginning of Using strchr  function----------------------------------------------------*/
    /*This function is used to finds the first occurrence of a character in a string*/

    printf("Strchr function to finds the first occurrence of a character in a string\n");
    printf("Enter an character to be scanned in \"computer program\" \n");

    scanf("%c", &ch);
    ptr = strchr( buffer1, ch);
    printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );


    printf("----------------------------------------------------\n");
    /* Ending of Using strchr function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/

    /* Beginning of Using strcmp function----------------------------------------------------*/
    /*This function is used to compare two strings*/

    printf("strcmp function to compare two strings\n");

    printf("Enter first string: ");
    gets(strg1);

    printf("\nEnter second string: ");
    gets(strg2);

    if(strcmp(strg1, strg2)==0)
    {
        printf("\nYou entered the same string two times\n");
    }

    else
    {
        printf("\nEntered strings are not same\n!");
    }

    printf("----------------------------------------------------\n");
    /* Ending of Using strcmp   function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/




    /* Beginning of Using strcpy function----------------------------------------------------*/
    /*This function is used to copy strings*/

    printf("strcpy function to copy strings\n");

    printf("Enter first string (ch_arr_1): ");
    gets(ch_arr1);

    printf("Enter second string(ch_arr_2): ");
    gets(ch_arr2);

    printf("\nCopying first string into second... \n\n");
    strcpy(ch_arr2, ch_arr1); // copy the contents of ch_arr1 to ch_arr2

    printf("First string (ch_arr_1) = %s\n", ch_arr1);
    printf("Second string (ch_arr_2) = %s\n", ch_arr2);




    printf("----------------------------------------------------\n");
    /* Ending of Using strcpy function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/


    /* Beginning of Using strlen function----------------------------------------------------*/
    /*This function is returning the number of characters in the string excluding the null character '\0'*/

    printf("Strlen function to get strings length \n");

    printf("Enter your dream destination: ");
    gets(destination);

    // calculate length of characters in destination
    len = strlen(destination);

    printf("Your dream destination %s has %d characters in it", destination, len);


    printf("----------------------------------------------------\n");
    /* Ending of Using strlen function----------------------------------------------------*/



    /*----------------------------------------------------------------------------------------------------*/


    /* Beginning of Using strncat function----------------------------------------------------*/
    /*This function is for string handling*/

    printf("strncat function is for string handling \n");

    // Appends 3 character from src to dest
    strncat(dest1, src1, 3);

    // Prints the string
    printf("Appends 3  character from src to dest\n");
    printf("Source string : %s\n", src1);
    printf("Destination string : %s\n", dest1);


    // Appends 5 character from src to dest
    strncat(dest1, src1, 5);

    // Prints the string
    printf("Appends 5 character from src to dest\n");
    printf("Source string : %s\n", src1);
    printf("Destination string : %s\n", dest1);

    printf("----------------------------------------------------\n");
    /* Ending of Using strncat function----------------------------------------------------*/



    /*----------------------------------------------------------------------------------------------------*/


    /* Beginning of Using strncmp  function----------------------------------------------------*/
    /*This function is for comparing two strings*/

    printf("Strncmp function is for comparing two strings \n");
    int result = strncmp(str1, str2, 4);

    if (result == 0)
    {
        // num is the 3rd parameter of strncmp() function
        printf("str1 is equal to str2 upto num characters\n");
    }
    else if (result > 0)
        printf("str1 is greater than str2\n");
    else
        printf("str2 is greater than str1\n");

    printf("Value returned by strncmp() is: %d", result);

    printf("----------------------------------------------------\n");
    /* Ending of Using strncmp  function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/




    /* Beginning of Using strncpy  function----------------------------------------------------*/
    /*This function is to copiy only the specified number of characters to destination string*/

    printf("Strncpy function is for comparing two strings \n");
    strcpy(Str2, "welcome to beginnersbook.com");

    /*We are copying only the 7 characters of string str2 to str1*/

    strncpy(Str1, Str2, 7);

    printf("String str1: %s\n", Str1);
    printf("String str2: %s\n", Str2);

    printf("----------------------------------------------------\n");
    /* Ending of Using strncpy  function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/




    /*----------------------------------------------------------------------------------------------------*/


    /* Beginning of Using strrchr  function----------------------------------------------------*/
    /*This function is to search the last occurrence of the specified character in the given string*/

    printf("Strrchr function is for searching the last occurrence of the specified character \n");

    char* ptr = strrchr(string, character);

    if (ptr)
    {
        printf("Last position of %c  in %c is %d\n", character, string, ptr-string);
    }

    // If the character we're searching is not in the string array
    else
    {
        printf("%c is not present %c is %d\n", character, string);
    }


    printf("----------------------------------------------------\n");
    /* Ending of Using strrchr   function----------------------------------------------------*/


    /*----------------------------------------------------------------------------------------------------*/


    return 0;
}
