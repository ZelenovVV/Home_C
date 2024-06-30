


#include <stdio.h>

int main(void)
{
    int n, n1, i, sum, mult, t;
    scanf("%d", &n);
    for(i = 10; i <= n; i++)
    {
        n1 = i;
        sum = 0;
        mult = 1;
        while (n1 != 0)
        {
            t = n1%10;
            sum = sum + t;
            mult = mult * t;
            n1 = n1/10;
        }
        if (sum == mult)
            printf("%d ", i);

    }

    return 0;
}

