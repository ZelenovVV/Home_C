#include <stdio.h>
#include <limits.h>


int Input(int arr[5][5], int n, int m)
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


float AvArDiagMatrix(int n, int a[n][n])
{
    int sum = 0;
    float AvSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    AvSum = (float)sum/n;
    return AvSum;
}



int NumOfTheNums(int arr[5][5], int n, int m)
{
    int value = 0;
    float AvSum = 0;
    AvSum = AvArDiagMatrix (5, arr);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > 0 && arr[i][j] > AvSum)
                value++;
        }
    }
    return value;
}




int main(void)
{
    int arr[5][5];
    Input(arr, 5, 5);
    printf("%d\n", NumOfTheNums(arr, 5, 5));
    return 0;
}



