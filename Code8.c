// C Program to Demonstrate the Working of Keyword long
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long int a = 1234567891;
    // long is used to store more digits than int which int can't
    int b = 12222222;
    printf("%ld\n", a);
    printf("%d\n", b);

    return 0;
}