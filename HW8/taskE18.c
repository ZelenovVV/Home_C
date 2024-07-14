#include <stdio.h>




int Input(int arr[], int n)
{
    int i;
    arr[0] = 2;
    for (i = 1; i < n; i++ )
    {
        arr[i] = arr[i-1] + 1;
    }
    return i;
}



void PrintArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

}


void numDivider(int arr1[], int n1, int arr2[], int n2)
{
    for (int i = 0; i < n1; i++)
    {
        int nDiv = 0;
        for (int j = 0; j < n2; j++)
        {
            if ((arr2[j] % arr1[i]) == 0)
                nDiv++;
        }
        printf("%d %d\n", arr1[i], nDiv);
    }

}


int main(void)
{
    int n, ndiv;
    scanf("%d", &n);
    ndiv = 9;
    int arr[n-1], arrD[ndiv-1];
    Input(arr, n-1);
    Input(arrD, ndiv-1);
    /*PrintArr(arrD, ndiv-1);
    PrintArr(arr, n-1);*/
    numDivider(arrD, ndiv-1, arr, n-1);
    return 0;
}
