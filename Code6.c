// C Program to Compute Quotient and Remainder.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter The dividend: ");
    scanf("%d", &a);
    printf("Enter The divisor: ");
    scanf("%d", &b);
    printf("Quotient: %d\n", a/b);
    printf("Remainder: %d\n", a%b);

    return 0;
}