// C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a, b;
    printf("Enter The First Value: ");
    scanf("%f", &a);
    printf("Enter The Second Value: ");
    scanf("%f", &b);
    printf("The Multiplication is %0.2f\n", a*b);

    return 0;
}