#include <stdio.h>

int main()
{
    int *ptr1, *ptr2;
    int a = 10;
    int b=20;
    ptr1 = &a;
    ptr2 = &b;
    int *arr[] = {ptr1, ptr2};
    int i = 0;
    while (i<2)
    {
        printf ("%d \n", *arr[i]);
        i =i+1;
    }
}