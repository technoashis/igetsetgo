#include <stdio.h>

int main()
{
    int *iPtr;
    int iVar1 = 10;
    int iVar2 = 20;
    
    printf("****************************************************************\n");
    printf ("Value of the Integer variable 1 =  %d \n" , iVar1);
    printf ("Address of Integer variable 1 =  %p \n", &iVar1);
    printf("-----------------------------------------------------------------\n");
    printf ("Value of the Integer variable 2 =  %d \n" , iVar2);
    printf ("Address of Integer variable 2 =  %p \n", &iVar2);
    printf("****************************************************************\n\n\n");
    
    printf("[iPtr = &iVar1] Pointer pointing to Variable 1\n");
    iPtr = &iVar1;
    printf ("Address stored in the Pointer = %p \n" , iPtr);
    printf ("Value in Integer Pointer = %d \n" , *iPtr);
    printf("-----------------------------------------------------------------\n");
    printf("[iPtr = &iVar2] Pointer pointing to Variable 2\n");
    iPtr = &iVar2;    
    printf ("Address stored in the Pointer = %p \n" , iPtr);
    printf ("Value in Integer Pointer = %d \n" , *iPtr);
    
    return 0;
}