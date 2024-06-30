


#include <stdio.h>

int main(void)
{
    int n, i, n1, n2, t;
    scanf("%d", &n);
    n1 = 1;
    n2 = 1;
    if (n ==1)
        printf("1");
    else
        if (n !=0 )
        {
            printf("1 1 ");
            for(i = 2; i < n; i++)
            {
                t = n1 + n2;
                n1 = n2;
                n2 = t;
                printf("%d ", n2);
            }
        }
    return 0;
}

