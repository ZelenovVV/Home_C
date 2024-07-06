


#include <stdio.h>

int is_digit(char c);
int num;

int main()
{
    char c;
    while ((c = getchar()) !='.')
    {
        is_digit (c);
    }
    printf("%d\n", num);
    return 0;
}


int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        num += 1;
    else
        num = num;
    return num;
}
