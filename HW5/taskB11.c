


#include <stdio.h>

int main(void)
{
    unsigned int a, a1;
    scanf("%d", &a);
    a1 = 0;
    while (a != 0)
    {
        a1 = a1*10 + a%10;
        a = a/10;
    }
    printf("%d\n", a1);

    return 0;
}

