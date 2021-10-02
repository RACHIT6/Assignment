// Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    float r;
    printf("Enter The Radius of Circle: ");
    scanf("%f", &r);
    float diameter = 2 * r, circumference = 2 * PI * r, area = 4 * PI * r * r;
    printf("The diameter of circle is %0.2f\n", diameter);
    printf("The circumference of circle is %0.2f\n", circumference);
    printf("The area of circle is %0.2f\n", area);

    return 0;
}