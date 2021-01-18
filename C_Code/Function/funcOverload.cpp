#include <stdio.h>
#include <math.h>

void calcArea(float radius =5)
{
    // Calc Area of Circle
    printf ("Area of the Circle %f \n", 3.14159*radius*radius);
}


// void calcArea(int radius)
// {
//     printf ("Area of the Circle %f \n", 3.14159*radius*radius);
// }

void calcArea(float radius)
{
    printf ("Area of the Circle %f \n", 3.14159*radius*radius);
}

void calcArea(float side1, float side2, float side3)
{
    float semiPerimeter = (side1 + side2 + side3)/2;
    float area =  sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
    printf("Area of the triangle = %f \n", area);
}

void calcArea(float height, float breadth)
{
    float area =  height * breadth;
    printf("Area of the Rectangle = %f \n", area);
}

int main()
{
    // Notice it is in CPP. 
    // Function overloading and Default argument is not supported in C
    //calcArea(10.0);
    calcArea();
    calcArea(3,4,5);
    calcArea(3,4);
}