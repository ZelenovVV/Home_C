#include <stdio.h>


int is2pow(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n % 2 != 0)
    {
        return 0;
    }
    else
        return is2pow(n/2);
}

int main()
{
    int num;
    scanf("%d", &num);
    if (num == 0)
        printf("NO");
    if (num >= 1)
        printf("%s", (is2pow(num) == 1) ? "YES" : "NO");
    return 0;
}
