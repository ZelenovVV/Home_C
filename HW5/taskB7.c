


#include <stdio.h>

int main(void)
{
    int a, a1, b, A;
    a1 = b = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        a1 = a%10;
        for (b = a/10; b != 0; b = b/10)
        {
            if (a1 == b%10)
            {
                A = 1;
                break;
            }
        }
        a = a/10;
    }
    printf("%s\n", (A == 1)? "YES" : "NO");

    return 0;
}

