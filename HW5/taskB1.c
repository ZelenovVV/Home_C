


#include <stdio.h>

int main(void)
{

    int X, n=1;
    scanf("%d", &X);
    while (n<=X)
    {
    printf("%d %d %d\n", n, n*n, n*n*n);
    n++;
    }
    return 0;
}

