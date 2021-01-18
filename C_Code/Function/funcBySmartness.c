#include <stdio.h>

void convertToFarenheit(const float *temprature)
{
    float temp_temprature = (*temprature *9.0) /5.0 +32;
    printf ("The temprature inside the function %.2f in F \n", temp_temprature);
}

int main()
{
    float temprature;
    temprature = 30;
    convertToFarenheit(&temprature);
    printf ("The temprature outside the function %.2f in C \n", temprature);
}