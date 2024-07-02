


#include <stdio.h>

int decToSyst(int N, int P);
int main()
{
    int N, P;
    scanf("%d%d", &N, &P);
    printf("%d\n", decToSyst(N, P));
    return 0;
}

int decToSyst(int N, int P)
{
    int order, result, rem;
    rem = 0;
    order = 1;
    result = 0;
    while (N > 0)
    {
        rem = N%P;
        result = (rem * order)+result;
        order *= 10;
        N /= P;
    }
    return result;
}

