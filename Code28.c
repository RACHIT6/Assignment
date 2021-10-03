// Write a C program to calculate area of an equilateral triangle.
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int s;
    float area;
    printf("Enter The side of equilateral triangle\n");
    scanf("%d", &s);
    area = (sqrt(3) / 4) * (s * s);
    printf("The area of triangle is %0.2f\n", area);

    return 0;
}