#include <stdio.h>


int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

float Middle(int arr[], int n)
{
    int i;
    float m = 0;
    for (i = 0; i < n; i++)
    {
        m += arr[i];
    }
    m = m/(float)n;
    return m;
}

int main(void)
{
    int n = 5;
    /*scanf("%d", &n);*/
    int arr[n];
    float mid;
    Input(arr, n);
    mid = Middle(arr, n);
    printf("%.3f", mid);
    return 0;
}

