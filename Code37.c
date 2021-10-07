// Write a program that prints the floating point value in exponential format correct to
// two decimal places
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float num;
    printf("Enter the number\n");
    scanf("%f", &num);
    printf("The exponential form of number %.2f is %.2e\n", num, num);

    return 0;
}