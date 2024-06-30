


#include <stdio.h>

int main(void)
{

    int a, b;
    scanf("%d%d", &a, &b);
    if (a<=b)
    {
        while (a<=b)
        {
        printf("%d ", a*a);
        a++;
        }
    }
    else
        printf("Error, a>b\n");
    return 0;
}

