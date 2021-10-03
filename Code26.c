// Write a C program to enter two angles of a triangle and find the third angle
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter The Two angles\n");
    scanf("%d %d", &a, &b);
    int c = 180 - (a + b);
    printf("The Third angle is %d\n", c);

    return 0;
}