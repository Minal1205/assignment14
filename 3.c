#include <stdio.h>
/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/

int main()
{
    int a[10], evensum = 0, oddsum = 0;
    printf("Enter Data\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            evensum = evensum + a[i];
        }
        else
            oddsum = oddsum + a[i];
    }
    printf("Sum of Even numbers in array is = %d\n", evensum);
    printf("Sum of odd numbers in array is =  %d\n", oddsum);

    return 0;
}