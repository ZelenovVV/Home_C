


#include <stdio.h>



void descend(unsigned int n)
{
    if (n > 0)
    {
        printf("%u ", n%10);
        descend(n/10);
    }
}


int main()
{
    unsigned int num = 0;
    scanf("%u", &num);
    if (num == 0)
    {
        printf("0");
    }
    if (num != 0)
    {
        descend(num);
    }
    return 0;
}

