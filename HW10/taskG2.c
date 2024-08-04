#include <stdio.h>

int main(void)
{
    FILE *f1, *f2;
    char string[26];
    int N = 0, i = 0, j = 0;
    signed char c;
    f1 = fopen("input.txt","r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF)
        {
            if (c != '\n' && c != '\r')
            {
                N = N * 10 + (c - '0');
                i++;
            }
        }
    }
    fclose(f1);
    for (j = 0; j < N; j++)
    {
        if (j%2 == 0)
        {
            string[j] = 'A' + j/2;
        }
        if (j%2 != 0)
        {
            if (j == 1 || (j - 1)%8 == 0)
            {
                string[j] = '2';
            }
            if (j == 3 || (j - 3)%8 == 0)
            {
                string[j] = '4';
            }
            if (j == 5 || (j - 5)%8 == 0)
            {
                string[j] = '6';
            }
            if (j == 7 || (j - 7)%8 == 0)
            {
                string[j] = '8';
            }
        }
    }
    string[j] = '\0';
    f2 = fopen("output.txt","w");
    fprintf(f2, "%s", string);
    fclose(f2);
    return 0;
}

