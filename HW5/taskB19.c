


#include <stdio.h>

int main(void)
{
    int n, sum, t;
    t = 1;
    scanf("%d", &n);
    while (n != 0)
    {
        t = n%10;
        sum = sum + t;
        n = n/10;
    }
    if (sum == 10)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");
    return 0;
}mbmghf
