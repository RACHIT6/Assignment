// C Program to Swap Two Numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, temp;
    printf("Enter Your First Number: ");
    scanf("%d", &a);
    printf("Enter Your Second Number: ");
    scanf("%d", &b);
    printf("\n\n");
    printf("Before Swap: \n\n");
    printf("A = %d\n", a);
    printf("B = %d\n\n", b);
    // First Method:

    // temp = a;
    // a = b;
    // b = temp;

    // Second Method:

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap: \n\n");
    printf("A = %d\n", a);
    printf("B = %d\n\n", b);

    return 0;
}