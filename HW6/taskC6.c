


#include <stdio.h>

unsigned long long mult(unsigned int N);
int main()
{
    unsigned int N;
    scanf("%u", &N);
    if (N == 1)
    {
        printf("1\n");
    }
    else if (N > 1 && N <= 64)
    {
        printf("%llu\n", mult(N));
    }
    return 0;
}

unsigned long long mult(unsigned int N)
{
    unsigned long long int m;
    m = 1;
    for(int i = 2; i <= N; i++)
    {
        m = m*2;
    }
    return m;
}

