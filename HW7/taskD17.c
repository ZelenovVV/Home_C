#include <stdio.h>


int akkerman(int m, int n)
{
    int p = 0;
    if (m ==0)
    {
        p = n + 1;
    }
    if (m > 0 && n == 0)
    {
       p = akkerman(m - 1, 1);
    }
    if (m > 0 && n > 0)
    {
        p = akkerman(m - 1, akkerman(m, n - 1));
    }
    return p;
}

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = akkerman(a, b);
    printf("%d", c);
    return 0;
}
