#include <stdio.h>
// program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
int main()
{
    float a[10], sum = 0;

    printf("Enter Values to add \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    float avg = (sum / 10);
    printf("Average=%0.2f\n", avg);
    return 0;
}