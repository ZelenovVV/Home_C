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

void Max(int arr[], int n, int* m, int* n_m)
{
    *m = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (*m < arr[i])
        {
            *m = arr[i];
            *n_m = i+1;
        }
    }
}



int Max2(int arr[], int n, int max, int n_max)
{
    int m2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > m2 && arr[i] <= max && n_max != i+1)
        {
            m2 = arr[i];
        }
    }
    return m2;
}

int main(void)
{
    int max, n_max, max2, n = 10;
    /*scanf("%d", &n);*/
    max = INT_MIN;
    n_max = 1;
    max2 = INT_MIN;
    int arr[n];
    Input(arr, n);
    Max(arr, n, &max, &n_max);
    max2 = Max2(arr, n, max, n_max);
    printf("%d", max+max2);
    return 0;
}





