#include <stdio.h>


void print_digits(int n)
{
    if (n > 0)
    {
        print_digits(n/10);
        printf("%u ", n%10);
    }
}



int main()
{
    int a = 0;
    scanf("%u", &a);
    if (a == 0)
    {
        printf("0");
    }
    if (a != 0)
    {
        print_digits(a);
    }
    return 0;
}

