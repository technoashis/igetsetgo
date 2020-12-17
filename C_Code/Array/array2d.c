#include <stdio.h>

int main()
{
    int arr [2][5] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int i = 0;
    int j = 0;
    while (i<2)
    {
        while (j<5)
        {
            printf("arr [%d] [%d]  =  %d \n", i, j, arr[i][j]);
            j = j+1;
        }
        i= i+1;
        j=0; 
    }
    return 0;
}