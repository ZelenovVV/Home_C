#include <stdio.h>
#include <limits.h>


int Input(int arr[10][10], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
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

int MaxInRow(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int SumMax(int arr[10][10], int n, int m)
{
    int sum = 0;
    int max, arrX[10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arrX[j] = arr[i][j];
        }
        max = MaxInRow(arrX, 10);
        sum = sum + max;
    }
    return sum;
}



int main(void)
{
    int arr[10][10];
    Input(arr, 10, 10);
    printf("%d\n", SumMax(arr, 10, 10));
    return 0;
}



