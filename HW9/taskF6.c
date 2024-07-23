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

int is_two_same(int size, int a[])
{
    int d = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] == a[j])
            {
            d = 1;
            break;
            }
        }

    }
    return d;
}

/*
int main(void)
{
    int n, doub = 0;
    scanf("%d", &n);
    int arr[n];
    Input(arr, n);
    printf("%d", doub = is_two_same(n, arr));
    return 0;
}
*/
