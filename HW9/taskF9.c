/*#include <stdio.h>


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
*/

void swap_negmax_last(int size, int a[])
{
    int max, swap = 0, n_max = -1;
    max = -2147483648;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0 && max < a[i])
        {
            max = a[i];
            n_max = i;
        }
    }
    if (n_max != -1)
    {
        swap = a[size-1];
        a[size-1] = a[n_max];
        a[n_max] = swap;
    }
}


/*

int main(void)
{
    enum {n = 10};
    int arr[n];
    Input(arr, n);
    //PrintArr(arr, n);
    swap_negmax_last(n, arr);
    PrintArr(arr, n);
    return 0;
}

*/
