#include <stdio.h>
/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
int main()
{
    int a[10], b[10];
    printf("Enter Data\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}