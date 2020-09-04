/*************************************************************************************************************
*
File           :      this is the main file for my_string_function .
*
descriptions   :      excutable code for string function .
*
**************************************************************************************************************/
#include <stdio.h>
#include "string.h"
int main(void)
{
    /********************************** my_strcat() *********************************************************

    char first_name[] = "omar" ;
    char second_name[] = "Abdullah" ;
    my_strncat(first_name, second_name )  ;
    printf("my name is %s" , first_name) ;

    *********************************** my_strncat() **********************************************//******

    char first_name[] = "omar" ;
    char second_name[] = "Abdullah" ;
    my_strncat(first_name, second_name , 10);
    printf("my name is = %s" , first_name) ;


    ********************************** my_strcpy() **********************************************//******


    char first_name[30] = "" ;
    char second_name[] = "omar Abdullah" ;
    my_strcpy(first_name, second_name);
    printf("my name is = %s" , first_name) ;


    *********************************** my_strncat() **********************************************//****


    char first_name[30] = "" ;
    char second_name[] = "omarAbdullah" ;
    my_strncpy(first_name, second_name, 12);
    printf("my name is = %s" , first_name) ;


    ************************************** my_strlen() ********************************************//***


    unsigned int length = 0 ;
    char str[] = "omar abdullah" ;
    length = my_strlen(str) ;
    printf("string length = %i", length) ;



    *************************************** my_strcmp()  ******************************************//***


    char str1[] = "omar" ;
    char str2[] = "abdullah" ;
    int i , j , k   ;
    i = my_strcmp(str1, "omar") ;
    j = my_strcmp(str1, str2) ;
    k = my_strcmp(str1, "abd") ;
    printf ( "%d\n%d\n%d\n", i, j, k ) ;



    ************************************** my_strrchr() **********************************************//*****


     char str[] = "this is testing string" ;
     char *p  ;
     p = my_strrchr(str , "i") ;
     printf ("last occurrence of \'i\' in \"%s\" is %s ",str, p);


   **********************************    my_strchr()    *************************************************//**


     char str[] = "this is testing string" ;
     char *p  ;
     p = my_strchr(str , 'i') ;
     printf ("First occurrence of \'i\' in \"%s\" is %s ",str, p);


    **************************************  my_strstr() ******************************************//******

    char string[55] ="This is a test string for testing";
    char *p;
    p = my_strstr (string,"test");
    printf("First occurrence of string \"test\" in %s is %s ",string, p);


    ************************************** my_strdup() **********************************************//***


    char str[] = "omar abdullah" ;
    char *p ;
    p = my_strdup(str) ;
    printf("duplicated string is %s" , p);


    ************************************* my_strlwr() *********************************************//****


    char string[] = "OMAR ABDULLAH" ;
    printf("%s" , my_strlwr(string));



   ************************************* my_strupr() *********************************************//****

    char string[] = "omar abdullah" ;
    char *p ;
    p = my_strupr(string) ;
    printf("%s" , p);


    ******************************** my_strrev() ****************************************************//**

    char string[50] = "omar abdullah" ;

    printf("reverse string is %s" ,my_strrev(string)) ;


    ********************************  my_strset() **************************************************//**


    char str[50] = "omar abdullah" ;
    printf("%s\n" , my_strset(str , '#')) ;


    ********************************** my_strnset ****************************************************//**



    char str[50] = "omar abdullah" ;
    printf("%s\n" , my_strnset(str , '*', 5)) ;


    *************************************** my_memcpy() ************************************//*******
    char source[] = "omar" ;
    char des[50] ;
    my_memcpy(des , source , strlen(source)+1 ) ;
    printf("des is %s" , des) ;



    **************************************** my_memset() ******************************************//**

    char *str = "omar" ;
    my_memset(str, 7 , 2) ;
    printf("%s" , str) ;

    *****************************************   END  *****************************************************/

}

