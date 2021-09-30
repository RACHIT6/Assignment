// C Program to Find ASCII Value of a Character.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter The Character: ");
    scanf("%c", &c);
    printf("The ASCII Value of %c is %d\n", c, c);

    return 0;
}