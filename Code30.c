// Write a C program to enter P, T, R and calculate Simple Interest
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int f, p, t;
    float r;
    printf("Enter the principle amount\n");
    scanf("%d", &p);
    printf("Enter the rate\n");
    scanf("%d", &r);
    printf("Enter the time\n");
    scanf("%d", &t);
    // r = (float)r/100;
    f = p*r*t;
    printf("The simple interest is %d\n", f);

    return 0;
}