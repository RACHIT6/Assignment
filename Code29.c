// Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5, sum = 0;
    // printf("Enter The no of no of subject: ");
    // scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter The Marks of %d subject: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float)sum/(float)n;
    float per = ((float)sum/500)*100;
    printf("The sum is %d/500, the average is %0.2f and the total percentage is %0.2f%%\n", sum, average, per);

    return 0;
}