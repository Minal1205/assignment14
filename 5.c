#include <stdio.h>
/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
int main()
{
    int arr[10];
    printf("Enter Data \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum element is %d \n", min);
    return 0;
}