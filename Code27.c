// Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
#define area (b*h)/2
int main(int argc, char const *argv[])
{
    int b, h;
    printf("Enter the base and height of triangle\n");
    scanf("%d %d", &b, &h);
    printf("The area of triangle is %d\n", area);

    return 0;
}