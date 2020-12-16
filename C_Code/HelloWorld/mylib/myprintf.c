#include <stdio.h>
// gcc -Wall -c myprintf.c -o out/myprintf.o


int myprintf(const char * text)
{
    int ret;
    ret = printf ("%s\n", text);
    printf ("You printed %d characters\n", ret);
    return (ret);

}