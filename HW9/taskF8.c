#include <stdio.h>
#include <limits.h>

int InputA(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            break;
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

int KreatArr(int arr[], int m, int n)
{
    int i;
    arr[0] = m;
    arr[n-m] = n;
    for (i = 1; i < (n-m); i++)
    {
        arr[i] = arr[i - 1] + 1;
    }
    return i;
}


int arrLen(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            count++;
        }
        if (a[i] == 0)
            break;
    }
    return count;
}


int Min(int arr[], int n)
{
    int i;
    int min = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int Max(int arr[], int n)
{
    int i;
    int max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int Absent(int arr1[], int n1, int arr2[], int n2)
{
    int x, flag;
    for (int i = 0; i < n1; i++)
    {
        flag = 0;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            x = arr1[i];
            break;
        }
    }
    return x;
}



int main(void)
{
    int n = 1000;
    int arrA[n];
    int M, N, len = 0;
    InputA(arrA, n);
    len = arrLen(arrA, n);
    M = Min(arrA, len);
    N = Max(arrA, len);
    int arrB[len+1];
    KreatArr(arrB, M, N);
    //PrintArr(arrA, len);
    //PrintArr(arrB, len+1);
    //printf("%d %d %d", M, N, len);
    int x = Absent(arrB, len+1, arrA, len);
    printf("%d", x);
    return 0;
}

