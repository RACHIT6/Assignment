// C program to find volume of sphere
#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    float r;
    printf("Enter The radius of Sphere: ");
    scanf("%f", &r);
    float area = (4 * PI * r * r * r) / 3;
    printf("The Area of Sphere is %0.2f\n", area);

    return 0;
}