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
int find_max_array(int size, int a[])
{
    int m = a[0];
    for (int i = 0; i < size; i++)
    {
        if (m <= a[i])
        {
            m = a[i];
        }

    }
    return m;
}

/*
int main(void)
{
    int n, max = 0;
    scanf("%d", &n);
    int arr[n];
    Input(arr, n);
    printf("%d", max = find_max_array(n, arr));
    return 0;
}
*/
