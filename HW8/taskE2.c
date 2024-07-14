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

int Min(int arr[], int n)
{
    int i;
    float min = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(void)
{
    int n = 5;
    /*scanf("%d", &n);*/
    int arr[n], m;
    Input(arr, n);
    m = Min(arr, n);
    printf("%d", m);
    return 0;
}

