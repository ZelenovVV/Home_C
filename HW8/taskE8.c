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



void swap(int arr[], int size)
{
    for (int i = 0; i < (size/2) / 3; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[size/3 - 1 - i];
        arr[size/3 - 1 - i] = temp;
    }
    for (int i = size/3; i < ((size + size/2) / 3); ++i)
    {
        int temp = arr[i];
        arr[i] = arr[(2*size/3) + 3 - i];
        arr[((2*size/3) + 4) - 1 - i] = temp;
    }
    for (int i = (2*size/3); i < ((2*size + size/2) / 3 ); ++i)
    {
        int temp = arr[i];
        arr[i] = arr[size + 7 - i];
        arr[(size + 2*4) - 1 - i] = temp;
    }
}

int main(void)
{
    int n = 12;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    swap(arr, n);
    PrintArr(arr, n);
    return 0;
}
