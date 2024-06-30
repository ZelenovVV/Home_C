


#include <stdio.h>

int main(void)
{
    int a, sum;
    scanf("%d", &a);
    sum = 0;
    if (a>=0)
    {
        while (a!=0)
        {
            sum+=a%10;
            a = a/10;
        }
        printf("%d", sum);
    }
    else
        printf("Error, a<0\n");
    return 0;
}

