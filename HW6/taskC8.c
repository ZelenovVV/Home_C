


#include <stdio.h>

int main()
{
    char smbl;
    while ((smbl = getchar()) !='.')
    {
        if (smbl >= 'a' && smbl <= 'z')
            putchar('A' + (smbl - 'a'));
        else
            putchar(smbl);
    }
    return 0;
}


