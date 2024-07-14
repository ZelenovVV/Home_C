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



void sdvig(int arr[], int size) {
    int x = arr[size - 1];
    for (int i = size - 1; i > 0; --i)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

int main(void)
{
    int n = 10;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    sdvig(arr, n);
    PrintArr(arr, n);
    return 0;
}
