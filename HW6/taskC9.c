


#include <stdio.h>

unsigned long long fuk(unsigned int N);
int main()
{
    unsigned int N;
    scanf("%u", &N);
    if (N == 0)
    {
        printf("1\n");
    }
    else if (N > 0 && N <= 20)
    {
        printf("%llu\n", fuk(N));
    }
    return 0;
}

unsigned long long fuk(unsigned int N)
{
    unsigned long long int res;
    res = 1;
    for(int i = 1; i <= N; i++)
    {
        res *= i;
    }
    return res;
}

