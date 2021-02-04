#include <stdio.h>

void voidFunction ()
{
    printf ("Welcome to the land of funtions \n");
}
int intFunction()
{
    int nChars = printf ("Welcome to the land of argument funtions \n");
    return nChars;
}

void functionEvenOdd(int n)
{
    char *type [] = {"even","odd"};
    printf ("The number %d is a %s number", n, type[n%2] );
}

int main()
{
    voidFunction();int n = intFunction();printf ("The number of charecters Printed %d \n", n);
    
    functionEvenOdd (10); // Function with arguments
    return 0;
}