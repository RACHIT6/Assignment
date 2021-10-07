// Write a C program to addition of float same numbers without using 3 and – and +
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("The addition of same number is %0.3f\n", num*2);

    return 0;
}