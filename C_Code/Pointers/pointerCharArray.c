#include <stdio.h>

int main()
{
    char *iPtr;
    char iArr [10] = "Ashis Dash";
    int i =0;

    iPtr = iArr;
    while (i<10)
    {
        printf ("Value in Integer Pointer = %p \n" , iPtr+i);
        printf ("Value in Integer Pointer = %c \n" , *(iPtr+i));
        i = i+1;
    }
    return 0;
}