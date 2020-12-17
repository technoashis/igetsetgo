/*

A simple program to print hello world in teh console.

gcc myhelloWorld.c #to generate a.out !! Will Not Work !!
gcc myhelloWorld.c -o out/myhelloworld.exe #to generate helloworld executable. !! Will Not Work !!
gcc -c myhelloWorld.c -o out/myhelloworld.o #to generate helloworld object file.
gcc myhelloWorld.c -L mylib/out/ -lmylib -o out/myhelloworld.exe

*/
#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
    myprintf("Hello World");
}
