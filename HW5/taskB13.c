


#include <stdio.h>

int main(void)
{
    unsigned int a, evenA, oddA;
    scanf("%d", &a);
    evenA = 0;
    oddA = 0;
    while (a != 0)
    {
        if ((a%10)%2 == 0)
            evenA++;
        if ((a%10)%2 != 0)
            oddA++;
        a = a/10;
    }
    printf("%d %d\n", evenA, oddA);

    return 0;
}

