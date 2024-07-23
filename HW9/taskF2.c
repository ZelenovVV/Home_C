/*#include <stdio.h>
#include <locale.h>


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
void sort_even_odd(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
         for (int j = n - 1; j >= 1; j--)
        {
            if(a[j]%2 == 0 && a[j-1]%2 != 0)
            {
                int x = a[j];
                a[j] = a[j-1];
                a[j-1] = x;
            }
        }
        if (a[i]%2 != 0 && a[i+1]%2 == 0)
            break;
    }
}

/*

int main(void)
{
    /setlocale(LC_ALL, "ru_RU.utf8");
    int n;
    scanf("%d", &n);
    int arr[n];
    Input(arr, n);
    sort_even_odd(n, arr);
    PrintArr(arr, n);
    return 0;
}

*/
