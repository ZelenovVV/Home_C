#include <stdio.h>


int acounter(void)
{
    char str;
    static int n = 0;
    scanf("%c", &str);
    if (str != '.')
    {
        if (str == 'a')
        {
            n++;
        }
        acounter();
    }
    return n;
}

int main()
{
    int num;
    num = acounter();
    printf("%d", num);
    return 0;
}


