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



void swap(int arr[], int size) {
    for (int i = 0; i < size / 4; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[size/2 - 1 - i];
        arr[size/2 - 1 - i] = temp;
    }
    for (int i = size/2; i < (3*size / 4); ++i)
    {
        int temp = arr[i];
        arr[i] = arr[(3*size / 2) - 1 - i];
        arr[(3*size / 2) - 1 - i] = temp;
    }
}

int main(void)
{
    int n = 10;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    swap(arr, n);
    PrintArr(arr, n);
    return 0;
}
