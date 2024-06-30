


#include <stdio.h>

int main(void)
{
    int n1, n2, t;
    scanf("%d%d", &n1, &n2);
    while (n2 != 0)
    {
        t = n2;
        n2 = n1%n2;
        n1 = t;
    }
    printf("%d\n", n1);

    return 0;
}

