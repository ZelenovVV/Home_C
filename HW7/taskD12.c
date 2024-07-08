#include <stdio.h>




void Posled(int n, int k)
{
    for (int i = 1; i <= k; i++)
    {
        printf("%d ", k);
        n--;
        if (n == 0)
        {
            return;
        }
    }
    Posled(n, k +1);
}



int main()
{
    int n;
    scanf("%d", &n);
    Posled(n, 1);
    return 0;
}
