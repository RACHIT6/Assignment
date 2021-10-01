// Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    char c;
    float f;
    printf("Enter The Int Value : ", a);
    scanf("%d", &a);
    printf("Enter The char Value : ", c);
    getchar();
    scanf("%c", &c);
    printf("Enter The float Value : ", f);
    scanf("%f", &f);
    printf("int a = %d\n", a);
    printf("char c = %c\n", c);
    printf("flaot f = %f\n", f);

    return 0;
}