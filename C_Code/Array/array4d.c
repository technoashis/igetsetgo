#include <stdio.h>

int main()
{
    int arr [2][2][2][5] = {
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50
        };
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    while (i<2)
    {
        while (j<2)
        {
            while (k<2)
            {
                while (l<5)
                {
                    printf("arr [%d] [%d] [%d] [%d]  =  %d \n", i, j, k, l, arr[i][j][k][l]);
                    l = l+1;
                }
                k =k+1;
                l=0;
            }
            j= j+1;
            k=0;
        }
        i= i+1;
        j=0; 
    }
    return 0;
}