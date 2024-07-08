


#include <stdio.h>



void desc(unsigned int n)
{
    if (n > 0)
    {
        printf("%u ", n);
        desc(n-1);
    }
}


int main()
{
    unsigned int num = 0;
    scanf("%u", &num);
    desc(num);
    return 0;
}
