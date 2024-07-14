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

void Min(int arr[], int n, int* min, int* n_min)
{
    *min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (*min > arr[i])
        {
            *min = arr[i];
            *n_min = i+1;
        }
    }
}

void Max(int arr[], int n, int* max, int* n_max)
{
    *max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
            *n_max = i+1;
        }
    }
}


int main(void)
{
    int min, max, n_max, n_min, n = 10;
    /*scanf("%d", &n);*/
    max = INT_MIN;
    min = INT_MAX;
    n_max = 1;
    n_min = 1;
    int arr[n];
    Input(arr, n);
    Max(arr, n, &max, &n_max);
    Min(arr, n, &min, &n_min);
    printf("%d %d %d %d", n_max, max, n_min, min);
    return 0;
}

