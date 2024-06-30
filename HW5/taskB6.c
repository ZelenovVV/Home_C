


#include <stdio.h>

int main(void)
{
    int a, n1, n2, A;
    n1 = n2 = 0;
    scanf("%d", &a);
    while (a!=0)
    {
        n1 = a%10;
        a = a/10;
        n2 = a%10;
        if (n1 == n2)
        {
            A = 1;
            break;
        }
    }
    printf("%s\n", (A == 1)? "YES" : "NO");

    return 0;
}

