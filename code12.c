// C program to find area of trapezium
#include <stdio.h>

float func(float x, float y, float z)
{
    float area =(x + y)/2 * z;
    return area;
}

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Enter The Alternate Sides of Trapezium: \n");
    scanf("%f %f", &a, &b);
    printf("Enter The Height of Trapezium: ");
    scanf("%f", &c);
    float var = func(a, b, c);
    printf("The Area of Trapezium is %0.2f\n", var);

    return 0;
}