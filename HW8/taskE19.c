#include <stdio.h>



int lenArr(int a)
{
    int n=0;
    while (a!=0)
    {
        n++;
        a = a/10;
    }
    return n;
}


void InputArr(int arr[], int a)
{
    int n = 0;
    while (a!=0)
    {
        n++;
        arr[n-1] = a%10;
        a = a/10;
    }
}

void PrintArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

}


void swapAll(int arr[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int j = n - i - 1;
        int x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
    }
}


int main(void)
{
    int a, n;
    scanf("%d", &a);
    n = lenArr(a);
    int arr[n];
    InputArr(arr, a);
    swapAll(arr, n);
    PrintArr(arr, n);
    return 0;
}
