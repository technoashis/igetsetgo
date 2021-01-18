#include <stdio.h>

void convertToFarenheit(float temprature)
{
    temprature = (temprature *9.0) /5.0 +32;
    printf ("tempreature Address inside  %p \n", &temprature);
    printf ("The temprature inside the function %.2f in F \n", temprature);
}

int main()
{
    float temprature;
    temprature = 30;
    printf ("tempreature Address outside %p \n", &temprature);
    convertToFarenheit(temprature);
    printf ("The temprature outside the function %.2f in C \n", temprature);

}