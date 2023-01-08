
#include <stdio.h>
/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
int main()
{
    int k;

    printf("Enter the size of array\n");
    scanf("%d", &k);
    int a[k];
    printf("Enter Array Elements\n");
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array in reverse order is \n");
    for (int i = k - 1; i >= 0; i--)
    {

        printf("%d ", a[i]);
    }
    return 0;
}