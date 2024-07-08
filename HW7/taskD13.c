#include <stdio.h>



void print_simple(int num, int i)
{
    if (num == 1)
        return;
    while (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            print_simple(num/i, i);
            return;
        }
        i++;
    }
}


int main()
{
    int x;
    scanf("%d", &x);
    print_simple(x, 2);
    return 0;
}
