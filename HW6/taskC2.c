


#include <stdio.h>

int power(int, int);
int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d\n", power(n, p));
    return 0;
}

int power(int n, int p)
{
    int i, n_p;
    n_p = n;
    if (p >=2)
    {
        for (i = 2; i <= p; i++)
            n_p = n_p*n;
    }
    if (p == 1)
    {
        n_p = n;
    }
    if (p == 0)
    {
        n_p = 1;
    }
    return (n_p);
}

