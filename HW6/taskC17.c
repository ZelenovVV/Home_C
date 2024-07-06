


#include <stdio.h>

int is_happy_number(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s\n", (is_happy_number (n) == 1)? "YES" : "NO");
    return 0;
}

int is_happy_number(int n)
{
    int n1, i, sum, mult, t;
    if (n == 1 || n == 0)
    {
        t =1;
    }
    if (n > 1)
    {
        for(i = 10; i <= n; i++)
        {
            n1 = i;
            sum = 0;
            mult = 1;
            while (n1 != 0)
            {
                sum = sum + (n1%10);
                mult = mult*(n1%10);
                if (sum == mult)
                {
                    t = 1;
                }
                else
                {
                    t = 0;
                }
                n1 = n1/10;
            }
        }
    }
    return (t);
}
