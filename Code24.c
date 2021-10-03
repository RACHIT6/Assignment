// Write a C program to find power of any number x ^ y.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, power;
    printf("Enter The Number: ");
    scanf("%d", &a);
    printf("Enter The exponential: ");
    scanf("%d", &power);
    int result = pow(a, power);
    printf("The result is %d\n", result);

    return 0;
}