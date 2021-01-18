#include <stdio.h>

int main()
{
    int *iPtr;
    int iArr [5] = {10, 11, 12, 13, 14};
    int i =0;

    iPtr = iArr;
    while (i<5)
    {
        printf ("Value in Integer Pointer = %p \n" , iPtr+i);
        printf ("Value in thh address Pointer = %d \n" , *(iPtr+i));
        i = i+1;
    }
    return 0;
}