


#include <stdio.h>



void desc(int a, int b)
{
    if (a >= b)
    {
        printf("%d ", a);
        desc(a-1, b);
    }
}

void inc(int a, int b)
{
    if (a <= b)
    {
        printf("%d ", a);
        inc(a+1, b);
    }
}



int main()
{
    int A, B;
    A = 0;
    B = 0;
    scanf("%d%d", &A, &B);
    if (A <= B)
    {
        inc(A, B);
    }
    if (A > B)
    {
        desc(A, B);
    }
    return 0;
}




