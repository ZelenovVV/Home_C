


#include <stdio.h>

int main(void)
{
    unsigned int a, min, max;
    scanf("%d", &a);
    min = 9;
    max = 0;
    while (a != 0)
    {
        if (min > a%10)
            min = a%10;
         if (max < a%10)
            max = a%10;
        a = a/10;
    }
    printf("%d %d\n", min, max);

    return 0;
}

