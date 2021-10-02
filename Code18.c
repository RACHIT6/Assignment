// Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
#define area l*b
int main(int argc, char const *argv[])
{
    int l, b;
    printf("Enter the Length of Rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%d", &b);
    printf("The Area of rectangle is %d\n", area);

    return 0;
}