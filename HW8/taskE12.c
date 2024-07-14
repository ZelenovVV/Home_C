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

void PrintArr(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}

int last_Num(int a)
{
    int b;
    b = a%10;
    return b;
}


void doubl_sort(int arr[], int size)
{
    int t;
    t = 0;
    for (int i = 0; i < size / 2; i++)
    {
        for (int j = 0; j < size/2 - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
        for (int j = size/2; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
   }
}


int main(void)
{
    int n = 10;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    doubl_sort(arr, n);
    PrintArr(arr, n);
    return 0;
}
