/*#include <stdio.h>

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

void change_max_min(int size, int a[])
{
    int swap, max = a[0], n_max = 0, min = a[0], n_min = 0;
    for (int i = 0; i < size; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            n_min = i;
        }
        if (max < a[i])
        {
            max = a[i];
            n_max = i;
        }
    }
    if (max > min)
    {
        swap = a[n_max];
        a[n_max] = a[n_min];
        a[n_min] = swap;
    }
}

/*
int main(void)
{
    int n = 10;
    int arr[n];
    Input(arr, n);
    change_max_min(n, arr);
    PrintArr(arr, n);
    return 0;
}
*/
