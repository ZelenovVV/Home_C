#include <stdio.h>
#include <limits.h>

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

int Min1(int arr[], int n)
{
    int min1 = arr[0];
    int n_min1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (min1 > arr[i])
        {
            min1 = arr[i];
            n_min1 = i;
        }
    }
    return n_min1;
}

int Min2(int arr[], int n, int n_min1)
{

    int min2;
    int n_min2;
    if (n_min1 == 0)
    {
        min2 = arr[1];
        n_min2 = 1;
    }
    else
    {
        min2 = arr[0];
        n_min2 = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if ((min2 > arr[i]) && (i != n_min1))
        {
            min2 = arr[i];
            n_min2 = i;
        }
    }
    return n_min2;
}

void Print2Min(int arr[], int n)
{
    int n_min1, n_min2;
    n_min1 = Min1(arr, n);
    n_min2 = Min2(arr, n, n_min1);
    printf("%d %d\n", (n_min1 < n_min2 ? n_min1 : n_min2), (n_min1 > n_min2 ? n_min1 : n_min2));
}


int main(void)
{
    int n = 30;
    int arr[n];
    Input(arr, n);
    Print2Min(arr, n);
    return 0;
}
