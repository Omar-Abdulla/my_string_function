/*************************************************************************************************************
*
File         :      this file for string function source code .
*
**************************************************************************************************************/

#include "string.h"


// this function used to Concatenates str2 at the end of str1

char *my_strcat(char *ptr1 , char *ptr2){
    char *star_address = ptr1 ;
    while (*ptr1 != '\0'){
        ptr1++ ;
    }

    while(*ptr2 != '\0'){
        *ptr1 = *ptr2 ;
        ptr1++ ;
        ptr2++ ;

    }
     return star_address ;

}

// this function used to Appends a portion of string to another

char *my_strncat(char *ptr1 , char *ptr2, unsigned int size)
{
    while (*ptr1 != '\0')
    {
        ptr1++ ;
    }

    for (int i = 1 ;i <= size ; i++)
    {
        *ptr1 = *ptr2 ;
        ptr1++ ;
        ptr2++ ;

    }

}

// this function to Copies str2 into str1

char *my_strcpy( char *destination ,  const char *source)
{
    while (*source != '\0')
    {   *destination = *source ;
        source++ ;
        destination++ ;

    }

}

// this function to Copies given number of characters of one string to another

char *my_strncpy(char *destination, const char *source,unsigned int size)
{

    for (int i = 1 ; i <= size ; i++)
    {
        *destination= *source ;
        destination++ ;
        source++ ;

    }


}

// this function to give the length of the given string

unsigned int my_strlen(const char *str)
{
    unsigned int counter = 0 ;
    while (*str != '\0')
    {
        str++ ;
        counter++ ;
    }

    return counter ;
}

// this function compares two given strings and returns zero if they are same.

int my_strcmp( const char *str1, const char *str2 )
{
    unsigned int counter1 = 0 , counter2 = 0 ;
    while(*str1 != '\0')
    {
        str1++ ;
        counter1++ ;

    }
    while(*str2 != '\0')
    {
        str2++ ;
        counter2++ ;

    }
    if(counter1 == counter2)
    {
        return 0;
    }
    else if(counter1 > counter2)
    {
        return -1;
    }
    else { return  1 ;}

}

//this function returns pointer to the first occurrence of the character in a given string
char *my_strchr( char *str1, int character)
{
    char *ptr ;
    while (*str1 != '\0')
    {
        if(*str1 == character)
        {
            ptr = str1 ;
            break ;
        }
        str1++ ;
    }
    return ptr ;

}

// this function returns pointer to the last occurrence of the character in a given string

char *my_strrchr(  char *str1,int character)
{
    char *ptr ;
    while (*str1 != '\0')
    {
        if(*str1 == character)
        {
            ptr = str1 ;
        }
        str1++ ;
    }
    return ptr ;

}

// this function  returns pointer to the first occurrence of the string in a given string

char *my_strstr( const char *str1, const  char *str2)
{

    char *ptr ;
    while (*str1 != '\0')
    {
        if(*str1 == *str2)
        {
            str2++ ;
            str1++ ;
           //while(*str1 != '\0')
          // {
            if(*str1 == *str2)
                {
                    ptr = str1 ;
                    break ;
                }
           }
           str1++ ;


        }
        str1++ ;

    return ptr ;
}

// this function used to duplicates the given string.

char *my_strdup( char *str)
{
    return str ;
}

// this function converts a given string into lowercase.

char *my_strlwr(char *str)
{
    char *p = str ;
    while(*str != '\0')
    {
       *str = tolower(*str) ;
       str++ ;
    }
    str = p ;
    return str ;
}


// this function converts a given string into uppercase.

char *my_strupr(char *str)
{
    char *p = str ;
    while(*str != '\0')
    {
       *str = toupper(*str) ;
       str++ ;
    }
    str = p ;
    return str ;
}

// this function reverses a given string in C language.

char *my_strrev(char *str)
{
    char *pstr = str ;
    char rev[50] = ""  ;
    char *p = rev ;
    while(*str != '\0')
    {
        str++ ;
    }
    str-- ;
    while(str != pstr)
    {
        *p = *str ;
        str-- ;
        p++   ;

    }
    *p = '\0' ;
    p = rev ;
    while(*p != '\0')
    {
        *str = *p ;
        p++   ;
        str++ ;
    }
    str = pstr ;
    return pstr ;
}


// this function sets all the characters in a string to given character.

char *my_strset(char *str , int c)
{
    char *p = str ;
    while (*str != '\0')
    {
        *str = c ;
        str++ ;
    }
    str = p ;
    return str ;
}

// this function sets portion of characters in a string to given character.

char *my_strnset(char *str , int c , int y)
{
    char *p = str ;
    for (int i = 1 ; i <= y ; i++)
    {
        *str = c ;
        str++ ;
    }
    str = p ;
    return str ;

}

//this function is used to copy a specified number of bytes from one memory to another .

void my_memcpy(void *des , void *source , int n)
{
    char *c_source = (char *)source  ;
    char *c_des = (char *)des  ;
    for(int i = 0 ; i< n ; i++)
    {
        c_des[i] = c_source[i] ;

    }
}

// this function used to initialize a specified number of bytes to null or any other value in the buffer .

void *my_memset(char *str , char c , int n){
    int i = 0 ;
    char *s = (char*) str ;
    for(i = 0 ; i < n ; i++)
    {
        s = c ;

    }
}


