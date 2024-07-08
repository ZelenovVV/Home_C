#include <stdio.h>
#include <limits.h>




int its_Max(int n)
{
    int static max = INT_MIN;
    scanf("%d", &n);
    if (n == 0)
        return (max);
    if (max <= n && n != 0)
    {
        max = n;
        its_Max(max);
    }
    else
        its_Max(max);
    return (max);
}

int main()
{
    int n = 0;
    printf("%d", its_Max(n));
    return 0;
}
