// Write a C program to enter any number and calculate its square root.
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter The Number\n");
    scanf("%d", &a);
    float b = sqrt(a);
    printf("The Square root of %d is %0.2f\n", a, b);

    return 0;
}