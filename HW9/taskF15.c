/*#include <stdio.h>
#include <stdlib.h>

int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

void PrintArr(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}

*/

int count_bigger_abs(int n, int a[])
{
    int count = 0;
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (abs(a[j]) > max)
            {
                count++;
            }
    }
    return count;
}

/*
int main(void)
{
    int n = 10;
    int arr[n];
    Input(arr, n);
    printf("%d\n", count_bigger_abs(n, arr));
    return 0;
}

*/
