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

void pos_Sum(int arr[], int n)
{
    int pSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pSum += arr[i];
        }
    }
    printf("%d", pSum);
}

int main(void)
{
    int n = 10;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    pos_Sum(arr, n);
    return 0;
}





