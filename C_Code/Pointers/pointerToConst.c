#include <stdio.h>

int main()
{
    int n  = 20;
    const int * iPtr;
    iPtr = &n;
    printf ("The address stored in tghe pointer %p \n", iPtr);
    printf ("The Value stored in tghe pointer %d \n", *iPtr);
    //*iPtr = 30;
    n = 30; 
    printf ("The address stored in tghe pointer %p \n", iPtr);
    printf ("The value stored in tghe pointer %d \n", *iPtr);
}
