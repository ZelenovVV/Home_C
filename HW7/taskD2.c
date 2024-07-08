


#include <stdio.h>



unsigned int  increase(unsigned int n)
{
    unsigned int t = 0;
    if (n > 0)
    {
        t = n + increase (n-1);
    }
    return (t);
}


int main()
{
    unsigned int x, num = 0;
    scanf("%u", &num);
    x = increase(num);
    printf("%u\n", x);
    return 0;
}

