// C Program to find area of triangle using heron’s formula.
#include <stdio.h>
#include <math.h>

float func(float x, float y, float z)
{
    int s = (x + y + z) / 2;
    float area;
    area = s * (s - x) * (s - y) * (s - z);
    return sqrt(area);
}

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Enter The Three Side of triangle: \n");
    scanf("%f %f %f", &a, &b, &c);
    float var = func(a, b, c);
    printf("The Area of Triangle is %.2f\n", var);

    return 0;
}