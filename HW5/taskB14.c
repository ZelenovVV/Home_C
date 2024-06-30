


#include <stdio.h>

int main(void)
{
    unsigned int a, numberA;
    numberA = 0;
    do
    {
        scanf("%d", &a);
        if (a != 0)
            numberA++;
    }
    while (a != 0);
    printf("%d\n", numberA);

    return 0;
}

