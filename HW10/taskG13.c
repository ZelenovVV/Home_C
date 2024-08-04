#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    signed char c;
    int i = 0, start_ext_1 = 0, start_ext_2 = 0;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && i < 1000)
        {
            if (c != '\n' && c != '\r')
            {
                string[i] = (char)c;
                i++;
            }
        }
    }
    fclose(f1);
    string[i] = '\0';
    for (int j = i -1; j >= 0 ; j--)
    {
        if (string[j] == '/')
        {
                start_ext_1 = j;
                break;
        }
    }
        for (int j = i -1; j >= 0 ; j--)
    {
        if (string[j] == '.')
        {
                start_ext_2 = j;
                break;
        }
    }
    //printf("%d", start_ext_1);
    //printf("%d", start_ext_2);

    f2 = fopen("output.txt", "w");
    if (start_ext_1 != 0)
    {
        if (start_ext_1 > start_ext_2)
        {
            for (int k = 0; k < i; k++)
            {
                fprintf(f2, "%c", string[k]);
            }
        }
        if (start_ext_1 < start_ext_2)
        {
            for (int k = 0; k < start_ext_2; k++)
            {
                fprintf(f2, "%c", string[k]);
            }
        }
        fprintf(f2, ".html");
    }
    if (start_ext_1 == 0)
    {
        if (start_ext_2 == 0)
        {
            for (int k = 0; k < i; k++)
            {
                fprintf(f2, "%c", string[k]);
            }
        }
        if (start_ext_2 > 0)
        {
            for (int k = 0; k < start_ext_2; k++)
            {
                fprintf(f2, "%c", string[k]);
            }
        }
        fprintf(f2, ".html");
    }
    fclose(f2);
    return 0;
}
