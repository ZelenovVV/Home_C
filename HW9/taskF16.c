#include <stdio.h>


/*int Input(int arr[], int n)
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

int chess(int n1, char s[], int n2, int a[], char c, int numb)
{
    int flagChar = -1;
    int flagNum = -1;
    int blwh = -1;
    for (int i = 0; i < n1; i++)
    {
        if (s[i] == c)
        {
            if (i%2 == 0)
            {
                flagChar = 1;
            }
            if (i%2 != 0)
            {
                flagChar = 0;
            }
        }
    }
    for (int j = 0; j < n2; j++)
    {
        if (a[j] == numb)
        {
            if (j%2 == 0)
            {
                flagNum = 1;
            }
            if (j%2 != 0)
            {
                flagNum = 0;
            }
        }
    }
    blwh = flagChar + flagNum;
    return blwh;
}


int main(void)
{
    int n, bOw;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char c1, c2[2], str[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    scanf("%2s", c2);
    c1 = c2[0];
    n = c2[1] - '0';
    bOw = chess(8, str, 8, arr, c1, n);
    if (bOw == 0 || bOw == 2)
        printf("BLACK");
    if (bOw == 1)
        printf("WHITE");
    return 0;
}



