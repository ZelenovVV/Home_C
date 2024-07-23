#include <stdio.h>


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


void PrintAnswer(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d %d\n", i, arr[i]);
        }
    }
}

void CountDig(int arr[], char number[])
{
    for (int i = 0; number[i] != 0; i++)
    {
        arr[number[i] - '0']++;
    }
}






int main(void)
{
    enum {number_Len = 1000};
    char num[number_Len];
    int arr[10] = {0};
    int len = 10;
    scanf("%s", num);
    CountDig(arr, num);
    PrintAnswer(arr, len);
    return 0;
}
