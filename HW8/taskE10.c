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



void sdvig(int arr[], int size, int elem_num) {
    int x[elem_num];
    for (int i = 0; i < elem_num ; ++i)
    {
        x[i] = arr[size - elem_num + i];0
    }
    for (int j = size - 1; j > 0; --j)
    {
        arr[j] = arr[j-4];
    }
    for (int k = 0; k < elem_num ; ++k)
    {
        arr[k] = x[k];
    }
}

int main(void)
{
    int n = 12;
    int e_n = 4;
    /*scanf("%d", &n);*/
    int arr[n];
    Input(arr, n);
    sdvig(arr, n, e_n);
    PrintArr(arr, n);
    return 0;
}
