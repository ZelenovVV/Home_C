#include <stdio.h>



int is_palindrom(char str[])
{
    int palindrom = 1, len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    //printf("%d", len);
    for (int i = 0; i < len/2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            palindrom = 0;
            break;
        }
    }
    return palindrom;
}

int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    int pal;
    f1 = fopen("input.txt","r");
    fscanf(f1, "%s", string);
    fclose(f1);
    pal = is_palindrom(string);
    f2 = fopen("output.txt","w");
    if (pal == 1)
    {
        fprintf(f2, "YES");
    }
        if (pal == 0)
    {
        fprintf(f2, "NO");
    }
    fclose(f2);
    return 0;
}
