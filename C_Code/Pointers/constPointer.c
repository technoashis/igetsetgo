#include <stdio.h>

int main()
{
    int n = 20;
    int n1 = 30;
    int *const iPtr = &n;
    printf ("The address stored in tghe pointer %p \n", iPtr);
    printf ("The address stored in tghe pointer %d \n", *iPtr);
    iPtr = &n1;
    printf ("The address stored in tghe pointer %p \n", iPtr);
    printf ("The address stored in tghe pointer %d \n", *iPtr);
}