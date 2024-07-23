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
int sum_between_ab(int from, int to, int size, int a[])
{
    int count = 0, sum = 0;
    int array[size];
    if (to < from)
    {
        to = to + from;
        from = to - from;
        to = to - from;
        //printf("%d %d\n", from, to);
    }
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
                    array[count-1] = a[j];
                }
            }
        }
    }
    for (int k = 0; k < count; k++)
    {
        sum += array[k];
    }
    return sum;
}

/*
int main(void)
{
    int n = 10, from = 60, to = 50;
    int arr[n];
    Input(arr, n);
    printf("%d\n", sum_between_ab(from, to, n, arr));
    return 0;
}
*/
