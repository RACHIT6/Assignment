// C Program to solve area of square.
#include <stdio.h>

int func(int x)
{
    return x * x;
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter The Side of Square: ");
    scanf("%d", &a);
    int var = func(a);
    printf("The area of Square is %d\n", var);

    return 0;
}