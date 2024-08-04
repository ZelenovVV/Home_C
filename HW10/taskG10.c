#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    signed char c;
    int i = 0, j = 0, max = 0, length = 0, start_word = 0, max_start = 0;
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

    while (string[j] != '\0')
    {
        if (string[j] != ' ')
        {
            if (length == 0)
            {
                start_word = j;
            }
            length++;
        }
        if (string[j] == ' ')
        {
            if (length > max)
            {
                max = length;
                max_start = start_word;
            }
            length = 0;
        }
        j++;
    }
    if (length > max)
    {
        max = length;
        max_start = start_word;
    }

    f2 = fopen("output.txt", "w");
    for (int k = max_start; k < max_start + max; k++)
    {
        fprintf(f2, "%c", string[k]);
    }
    fclose(f2);
    return 0;
}


