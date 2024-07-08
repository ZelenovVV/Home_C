


#include <stdio.h>



int sum_digits(int n)
{
    static int sum = 0;
    if (n > 0)
    {
        sum_digits(n/10);
        sum = sum + n%10;
    }
    return (sum);
}



int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0");
    }
    if (num != 0)
    {
        printf("%d", sum_digits(num));
    }
    return 0;
}

