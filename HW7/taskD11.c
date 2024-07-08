#include <stdio.h>
#include <stdint.h>




int sum_digits(long long unsigned int n)
{
    static int sum = 0;
    if (n > 0)
    {
        sum_digits(n/10);
        sum = sum + n%10;
    }
    return (sum);
}

long long unsigned int DecToBin(int n)
{
    static long long unsigned int bin_n = 0;
    if (n > 0)
    {
        DecToBin(n/2);
        bin_n = 10*bin_n + n%2;
    }
    return (bin_n);
}



int main()
{
    int N = 0;
    long long unsigned int bin_N = 0;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("0");
    }
    if (N >= 1)
    {
        bin_N = DecToBin(N);
        printf ("%d\n", sum_digits(bin_N));
    }
    return 0;
}
