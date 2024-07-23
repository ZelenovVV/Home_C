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

int NumOfChet(int a[], int n)
{
    int chet = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            chet++;
        }
    }
    return chet;
}

int NumOfNechet(int a[], int n)
{
    int nechet = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 != 0)
        {
            nechet++;
        }
    }
    return nechet;
}

int NechZam(int a)
{
    int mult = 1;
    if (a%2 != 0)
    {
        while (a!=0)
        {
            if ((a%10)%2 != 0)
            {
                mult *= a%10;
            }
            a = a/10;
        }
    }
    return mult;
}

int ChZam(int a)
{
    int mult = 1;
    if (a%2 == 0)
    {
        while (a!=0)
        {
            if ((a%10)%2 == 0)
            {
                mult *= a%10;
            }
            a = a/10;
        }
    }
    return mult;
}


void ArrNechZam(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 != 0)
        {
            a[i] =  NechZam(a[i]);
        }
    }
}

void ArrChZam(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            a[i] =  ChZam(a[i]);
        }
    }
}

int main(void)
{
    int arr[10], Nech =0, Ch = 0;
    Input(arr, 10);
    Nech = NumOfNechet(arr, 10);
    Ch = NumOfChet(arr, 10);
    if (Ch > Nech)
    {
        ArrNechZam(arr, 10);
    }
    if (Nech >= Ch)
    {
        ArrChZam(arr, 10);
    }
    PrintArr(arr, 10);
    return 0;
}



