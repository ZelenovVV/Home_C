


#include <stdio.h>

int grow_up(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s\n", (grow_up(n) == 1)? "YES" : "NO");
    return 0;
}

int grow_up(int n)
{
    int n1, n2, t;
    t = 1;
    n1 = n % 10;
    n2 = 0;
    while (n != 0)
    {
        n = n/10;
        n2 = n%10;
        if (n2 > n1 || n2 == n1)
        {
            t = 0;
            break;
        }
        n1 = n%10;
    }
    return (t);
}
