


#include <stdio.h>

int main(void)
{
    int a, a1, a2, A;
    A = 1;
    scanf("%d", &a);
    a1 = a % 10;
    a2 = 0;
    while (a != 0)
    {
        a = a/10;
        a2 = a%10;
        if (a2 > a1 || a2 == a1)
        {
            A = 0;
            break;
        }
        a1 = a%10;
    }
    printf("%s\n", (A == 1)? "YES" : "NO");

    return 0;
}

