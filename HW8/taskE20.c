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

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

}



void Sort(int arr[], int n)
{
    int noSort;
    for (int i = 0; i < n; i++)
    {
        noSort = 1;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j-1] < arr[j])
            {
                int x = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = x;
                noSort = 0;
            }
        }
        if (noSort == 1)
            break;
    }
}


int main(void)
{
    int a, n;
    scanf("%d", &a);
    n = lenArr(a);
    int arr[n];
    InputArr(arr, a);
    Sort(arr, n);
    PrintArr(arr, n);
    return 0;
}
