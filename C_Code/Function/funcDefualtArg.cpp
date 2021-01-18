#include <stdio.h>
#include <math.h>

void loanCalc(int principal, float rate, int time, int isSimple = 0)
// Notice it is in CPP. 
// Function overloading and Default argument is not supported in C
{
    float interest;
    if (isSimple)
        interest = (principal * rate * time)/100;
    else
        interest = principal* (pow((1 + rate / 100), time));
    
    printf ("Loan Amount: %d \n", principal);
    printf ("Interest Rate: %.2f\n", rate);
    printf ("Loant Period in Year: %d\n", time);
    printf ("Interest Amount: %.2f\n", interest);
    printf ("--------------------------------------\n");
}
int main()
{
    loanCalc(100, 5.0, 10, 1);
    loanCalc(100, 5.0, 10);
}