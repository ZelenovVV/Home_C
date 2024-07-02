


#include <stdio.h>

int modul(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", modul(n));
    return 0;
}

int modul(int n)
{
    return (n >= 0) ? n : -n;
}

