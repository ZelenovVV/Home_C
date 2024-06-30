


#include <stdio.h>

int main(void)
{
    int a, a1, A;
    a1 = 0;
    A = 1;
    scanf("%d", &a);
    while (a!=0)
    {
    a1 = a%10;
    if (a1%2 != 0)
    {
        A = 0;
        break;
    }
    a = a/10;
    }
    printf("%s\n", (A == 1)? "YES" : "NO");
    return 0;
}

