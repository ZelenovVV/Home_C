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

int InputPos(int arr[], int n, int arrP[])
{
    int p_n = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && n <= 500)
        {
            arrP[p_n] = arr[i];
            p_n++;
        }
    }
    return p_n;
}

int InputNeg(int arr[], int n, int arrN[])
{
    int n_n = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && n >= -500)
        {
            arrN[n_n] = arr[i];
            n_n++;
        }
    }
    return n_n;
}


int main(void)
{
    int n, pos, neg;
    n = 10; pos = 0; neg = 0;
    /*scanf("%d", &n);*/
    int arr[n], arrPos[n], arrNeg[n];
    Input(arr, n);
    pos = InputPos(arr, n ,arrPos);
    neg = InputNeg(arr, n ,arrNeg);
    PrintArr(arrPos, pos, arrNeg, neg);
    return 0;
}
