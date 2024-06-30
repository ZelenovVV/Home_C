


#include <stdio.h>

int main(void)
{

    int a, b, sum;
    scanf("%d%d", &a, &b);
    if (a<=b)
    {
        while (a<=b)
        {
        sum+=a*a;
        a++;
        }
    printf("%d ", sum);
    }
    else
        printf("Error, a>b\n");
    return 0;
}

