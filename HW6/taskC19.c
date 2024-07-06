


#include <stdio.h>

int digit_to_num(char c);
int sum;

int main()
{
    char c;
    sum = 0;
    while ((c = getchar()) !='.')
    {
        digit_to_num(c);
    }
    printf("%d\n", sum);
    return 0;
}


int digit_to_num(char c)
{
    if (c >= '0' && c <= '9')
    {
        sum += c - '0';
    }
    else
        sum = sum;
    return sum;
}

