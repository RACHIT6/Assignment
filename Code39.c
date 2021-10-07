// Write a program to calculate salary of an employee, given his basic pay (entered by
// user), HRA=15% of the basic pay and TA=20% of the basic pay
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salary, HRA, TA, Ts;
    printf("Enter The Salary: ");
    scanf("%f", &salary);
    HRA = (15 * salary) / 100;
    TA = (20 * salary) / 100;
    Ts = salary + HRA + TA;
    printf("Basic Salary ->             %.2f\n", salary);
    printf("House Rent Announce ->      %.2f\n", HRA);
    printf("The Travelling Announce ->  %.2f\n", TA);
    printf("                            ------------\n");
    printf("Total Salary ->             %.2f\n", Ts);

    return 0;
}