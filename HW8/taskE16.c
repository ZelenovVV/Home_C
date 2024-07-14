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

int MaxNuminArr(int arr[], int n)
{
    static int countMax = 0;
    int count, valueMax;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                if (count > countMax)
                {
                    valueMax = arr[j];
                    countMax = count;
                }
            }
        }
    }
    return valueMax;
}


int main(void)
{
    int n, maxNum = 0;
    n = 10;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    /*PrintArr();*/
    printf("%d", maxNum = MaxNuminArr(arr, n));
    return 0;
}
