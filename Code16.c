// Write a C program to enter two numbers and perform all arithmetic operations
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter The two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("The sum of two numbers is %d\n", a + b);
    printf("The Multiplication of two numbers is %d\n", a * b);
    printf("The divison of two numbers is %0.2f\n", (float)a / (float)b);
    printf("The subtraction of two numbers is %d\n", a - b);

    return 0;
}