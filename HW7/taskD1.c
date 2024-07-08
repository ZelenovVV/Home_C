


#include <stdio.h>



void increase(unsigned int n)
{
    if (n > 0)
    {
        increase (n-1);
        printf("%u ", n);
    }
}


int main()
{
    unsigned int num = 0;
    scanf("%u", &num);
    increase(num);
    return 0;
}

