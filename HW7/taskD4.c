


#include <stdio.h>



void print_num(int num)
{
    if (num > 0)
    {
        print_num(num/10);
        printf("%u ", num%10);
    }
}


int main()
{
    int n = 0;
    scanf("%u", &n);
    if (n == 0)
    {
        printf("0");
    }
    if (n != 0)
    {
        print_num(n);
    }
    return 0;
}

