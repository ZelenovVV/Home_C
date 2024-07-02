


#include <stdio.h>


int is_simple(int num);
void print_simple(int n);

int main()
{
    int n;
    scanf("%d", &n);
    print_simple(n);
    return 0;
}

void print_simple(int n)
{

    for(int i = 2; i <= n; i++)
    {
        while (n%i == 0 && is_simple(i))
                {
                    printf("%d ", i);
                    n /= i;
                }
    }
    return;
}

int is_simple(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

