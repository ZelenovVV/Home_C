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

int dec_Null(int a)
{
    int b;
    if (a > 9 || a < -9 || a == 0)
    {
        b = (a/10)%10;
        a = a/10;
    }
    else
        b = 0;
    return b;
}



int arr_size(int arr[], int size)
{
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        if (dec_Null(arr[i]) == 0)
            a++;
    }
        return a;
}


void arr_creat(int arr1[], int size1, int arr2[])
{
    int count = -1;
    for (int i = 0; i < size1; i++)
    {
        if (dec_Null(arr1[i]) == 0)
            {
                ++count;
                arr2[count] = arr1[i];
            }
    }
}


int main(void)
{
    int n, m;
    n = 10;
    /*scanf("%d", &n);*/
    int arr1[n], arr2[n];
    Input(arr1, n);
    m = arr_size(arr1, n);
    arr_creat(arr1, n, arr2);
    PrintArr(arr2, m);
    return 0;
}
