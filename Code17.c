// Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
#define peri 2*(l + b)
int main(int argc, char const *argv[])
{
    int l, b;
    printf("Enter the Length of Rectangle: ");
    scanf("%d", &l);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%d", &b);
    printf("The Perimeter of rectangle is %d\n", peri);

    return 0;
}