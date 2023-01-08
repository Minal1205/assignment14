#include <stdio.h>
// to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
int main()
{
    int a[10], sum = 0;
    printf("Enter Values to add \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum=%d\n", sum);
    return 0;
}