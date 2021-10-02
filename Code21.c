// Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c, f;
    printf("Enter The Temperature in Celcius: ");
    scanf("%f", &c);
    f = ((c*9)/5) + 32;
    printf("%0.2f C = %0.2f F\n",c, f );

    return 0;
}