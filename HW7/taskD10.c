


#include <stdio.h>



int is_prime(int n, int delitel)
{
    int t = 0;
    if (n == delitel)
        return t = 1;
    if ((n > 1) && (n%delitel != 0))
        return is_prime(n, delitel+1);
    else
        return t = 0;

    return (t);
}



int main()
{
    int num = 0;
    int del = 2;
    scanf("%d", &num);
    if (num < 1)
    {
        printf("Error");
    }
    if (num >= 1)
    {
        printf("%s\n", (is_prime(num, del) == 1) ? "YES" : "NO");
    }
    return 0;
}
