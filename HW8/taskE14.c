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



int have_in(int ar1, int ar2[], int m, int h_in)
{
    for(int i = 0; i < m; i++)
        {
            if(ar2[i] == ar1)
            {
                h_in = 0;
                break;
            }
            else
                h_in = 1;
        }
    return h_in;
}



int arr2_creat(int arr_1[], int arr_2[], int n)
{
    int count = 0;
    int is_in = 1;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(arr_1[i] == arr_1[j])
            {
                is_in = have_in(arr_1[i], arr_2, count, is_in);
                if(is_in == 1)
                    arr_2[count++] = arr_1[i];
            }

    return count;
}



int main(void)
{
    int n, m;
    n = 10;
    /*scanf("%d", &n);*/
    int arr1[n], arr2[n];
    Input(arr1, n);
    m = arr2_creat(arr1, arr2, n);
    PrintArr(arr2, m);
    return 0;
}
