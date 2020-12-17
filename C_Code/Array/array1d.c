#include <stdio.h>

int main()
{
    int arr [5] = {34, 22, 67, 89, 90};
    int i = 0;
    while (i<5)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
        i = i+1;
    }
}