


#include <stdio.h>

int main(void)
{
    int a, n;
    scanf("%d", &a);
    n = 0;
    while (a!=0)
    {
        n++;
        a = a/10;
    }
    if (n == 3)
        printf("YES");
    else
        printf("NO");
    return 0;
}

