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

int compression(int a[], int b[], int N)
{
    int count = 1;
    int num = 0;
    if (a[0] == 1)
    {
        b[0] = 0;
        num = 1;
    }
    for (int i = 1; i < N; i++)
    {
        if (a[i-1] == a[i])
        {
            count++;
        }
        else
        {
            b[num] = count;
            count = 1;
            num++;
        }
    }
    b[num] = count;
    num++;
    return num;
}


/*
int main(void)
{
    enum {n = 100};
    int arrA[n];
    int arrB[n];
    int len = 0;
    Input(arrA, n);
    len = compression(arrA, arrB, n);
    PrintArr(arrB, len);
    return 0;
}
*/
