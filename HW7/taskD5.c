


#include <stdio.h>



void DecToBin(int num)
{
    if (num > 0)
    {
        DecToBin(num/2);
        printf("%u", num%2);
    }
}


int main()
{
    int n = 0;
    scanf("%u", &n);
    if (n == 0)
    {
        printf("0");
    }
    if (n != 0)
    {
        DecToBin(n);
    }
    return 0;
}

