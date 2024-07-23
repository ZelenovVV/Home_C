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
int count_between(int from, int to, int size, int a[])
{
    int count = 0;
    for (int i = from; i <= to; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (a[j] == i)
            {
                flag++;
                if (flag == 1)
                {
                    count++;
                }
            }

        }
    }
    return count;
}

/*
int main(void)
{
    int n = 12, from = 4, to = 6;
    int arr[n];
    Input(arr, n);
    printf("%d\n", count_between(from, to, n, arr));
    return 0;
}
*/
