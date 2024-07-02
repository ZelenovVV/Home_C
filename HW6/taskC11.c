


#include <stdio.h>


int nOD(int, int);

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d\n", nOD(n1, n2));
    return 0;
}



int nOD(int n1, int n2)
{
    int t;
    while (n2 != 0)
    {
        t = n2;
        n2 = n1%n2;
        n1 = t;
    }
    return (n1);
}


