#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *mynewstring (void)
{
    char *a;
    a = (char *)malloc (200* sizeof(char) );
    strcpy(a,"hello");
    printf("%s",a);
    return a;
}


int main (void)
{
    char *mystring;
    mystring = mynewstring();
    printf("%s",mystring);

    return 0;
}