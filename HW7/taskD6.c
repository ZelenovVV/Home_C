


#include <stdio.h>

void reverse_string()
{
    char str;
    scanf("%c", &str);
    if (str != '.')
    {
        reverse_string();
        printf("%c", str);
    }
}

int main()
{
    reverse_string();
    return 0;
}
