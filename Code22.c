// Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c, f;
    printf("Enter The Temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32)*5)/9 ;
    printf("Temperature in Celcius is %f\n", c);

    return 0;
}