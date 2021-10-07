// The population of a city is 30000. It increases by 20 % during first year and 30%
// during the second year. Write a program to find the population after two years? 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int pop = 30000, fy, sy;
    fy = (30*pop)/100 + pop;
    sy = (50*fy)/100 + fy;
    printf("The population after first year is %d\n", fy);
    printf("The population after second year is %d\n", sy);

    return 0;
}