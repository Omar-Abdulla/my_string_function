/*************************************************************************************************************
*
File         :      this header file for string function declerations .
*
**************************************************************************************************************/

char *my_strcat(char *ptr1 , char *ptr2)                                 ;
char *my_strncat(char *ptr1 , char *ptr2, unsigned int size)             ;
char *my_strcpy( char *destination ,  const char *source)                ;
char *my_strncpy(char *destination, const char *source,unsigned int size);
unsigned int my_strlen(const char *str)                                  ;
int my_strcmp( const char *str1, const char *str2 )                      ;
char *my_strchr( char *str1, int character)                              ;
char *my_strrchr(  char *str1,  int character)                           ;
char *my_strstr(const char *str1,const  char *str2)                      ;
char *my_strdup( char *str)                                              ;
char *my_strlwr(char *str)                                               ;
char *my_strupr(char *str)                                               ;
char *my_strrev(char *str)                                               ;
char *my_strset(char *str , int c)                                       ;
char *my_strnset(char *str , int c , int y)                              ;
void my_memcpy(void *des , void *source , int n)                         ;
void *my_memset(char *str , char c , int n)                              ;

