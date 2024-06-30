


#include <stdio.h>

int main(void)
{
    int n, i, t;
    t = 1;
    scanf("%d", &n);
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
        printf("%c\n", (t == 1) ? "YES" : "NO");
    }
    else
    {
        printf("%c\n", "NO");
    }
    return 0;
}
