// Write a C program to enter two numbers and find their sum.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter The Two Number to add: \n");
    scanf("%d %d", &a, &b);
    printf("The sum of two number is %d\n", a + b);

    return 0;
}