/*#include <stdio.h>


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
*/

void print_digit(char s[])
{
    int arr[10] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            arr[s[i] - '0']++;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] > 0)
        {
            printf("%d %d\n", j, arr[j]);
        }
    }
}

/*
int main(void)
{
    enum {number_Len = 1000};
    char num[number_Len];
    scanf("%1000[^\n]", num);
    printf("%s\n", num);
    print_digit(num);
    return 0;
}
*/
