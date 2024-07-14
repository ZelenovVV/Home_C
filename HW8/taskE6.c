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

void aver_Sum(int arr[], int n)
{
    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += arr[i];
    }
    printf("%.2f", (float)Sum/n);
}

int main(void)
{
    int n = 12;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    aver_Sum(arr, n);
    return 0;
}





