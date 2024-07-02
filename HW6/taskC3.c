


#include <stdio.h>

int middle(int, int);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", middle(a, b));
    return 0;
}

int middle(int a, int b)
{
    int mddl;
    mddl = (a+b)/2;
    return (mddl);
}

