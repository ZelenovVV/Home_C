


#include <stdio.h>

int is_prime(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s\n", (is_prime(n) == 1)? "YES" : "NO");
    return 0;
}

int is_prime(int n)
{
    int i, t;
    t = 1;
    if ( n > 1 )
    {
            for(i = 2; i < n; i++)
            {
                if (n%i == 0)
                {
                    t = 0;
                    break;
                }
            }
    }
    if (n == 1 || n == 0)
        t = 0;

    return (t);
}
