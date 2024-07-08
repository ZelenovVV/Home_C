#include <stdio.h>



int recurs_power(int n, int p)
{
    int n_p = 1;
    if (p >= 0 && p <= 100)
    {
        if (p == 0)
        {
            return n_p = 1;
        }
        else
        {
            n_p = n * recurs_power(n, p - 1);
        }
    }
    return n_p;
}



int main()
{
    int num, deg, res;
    num = 0;
    deg = 0;
    scanf("%d%d", &num, &deg);
    res = recurs_power(num, deg);
    printf("%d", res);
    return 0;
}

