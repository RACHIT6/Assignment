// Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int len;
    printf("Enter The length in cms: ");
    scanf("%d", &len);
    float kilo = len / 100000, meter = len / 100;
    printf("%d cms = %0.1f m\n", len, meter);
    printf("%d cms = %0.1f km\n", len, kilo);

    return 0;
}