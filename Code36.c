/*Raju got 6 and half apples from each of Raghu, Sheenu and Akash. He wants to know how many apples he has in total without adding them. Write a program which could help Raju in doing this.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int piece;
    float apples;
    printf("Enter the number of apples: ");
    scanf("%f", &apples);
    printf("How to persons give you that amount: ");
    scanf("%d", &piece);
    printf("The total apples are %0.1f\n", apples*piece);

    return 0;
}