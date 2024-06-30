

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i;
    char stroka[128];
    scanf("%127[^.]", stroka);
    for (i = 0; stroka[i] != '\0'; i++)
    {
        stroka[i] = tolower(stroka[i]);
    }
    printf("%s\n", stroka);

    return 0;
}
