


#include <stdio.h>

int f_x(int);
int main()
{
    int x, max = 0;
    while (scanf("%d", &x) && x != 0)
    {
        if (f_x(x) > max)
        {
            max = f_x(x);
        }
    }
    printf("%d", max);
    return 0;
}

int f_x(int x)
{
    int n;
    if (x >= 2)
    {
        n = x*x+4*x+5;
    }
        if (x < 2 && x>= -2)
    {
        n = x*x;
    }
        if (x < -2)
    {
        n = 4;
    }
    return (n);
}

