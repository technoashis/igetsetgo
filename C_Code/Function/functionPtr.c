#include <stdio.h>

void worldFunc ()
{
    printf ("Adam: Hellow fella !! Have you seen Eve?\n");
}

void hellFunc ()
{
    printf ("Lucifer: Hello from Hell !! Wanna Join. ??\n");
}

void heavenFunc ()
{
    printf ("God: Tell me Child !! \n");
}

void callLord (void (*func)())
{
    func();
}
int main()
{
   void (*fPtr)() = heavenFunc; // Function Pointer
   fPtr ();
   void (*fPtrArr[])() =  {worldFunc, heavenFunc, hellFunc}; //Array of Function Pointers
   fPtrArr[0]();
   callLord (hellFunc); // Pass function as an argument to another function
}