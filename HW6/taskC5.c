


#include <stdio.h>

int sum(int);
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", sum(N));
    return 0;
}

int sum(int N)
{
    int s = 0;
    for(int i=1; i<=N; i++)
    {
        s += i;
    }
    return (s);
}

