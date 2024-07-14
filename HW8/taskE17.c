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

void PrintArr(int arrP[],int p, int arrN[],int n)
{
    for (int i = 0; i < p; i++)
    {
        printf("%d ", arrP[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arrN[j]);
    }
}

void MinNumbers(int arr[], int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if ( count == 1)
            printf("%d ", arr[i]);
    }
}


int main(void)
{
    int n;
    n = 10;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    /*PrintArr();*/
    MinNumbers(arr, n);
    return 0;
}
