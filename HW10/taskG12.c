#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    signed char c;
    int i = 0, j = 0, length = 0, start_word = 0;
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

    f2 = fopen("output.txt", "w");
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
        if (string[j] != ' ' && string[j+1] == ' ')
        {
            length++;
            for (int k = start_word; k < start_word + length; k++)
            {
                fprintf(f2, "%c", string[k]);
            }
            fprintf(f2, "\n");
            length = 0;
        }
        if (string[j+1] == '\0')
        {
            for (int k = start_word; k < start_word + length; k++)
            {
                fprintf(f2, "%c", string[k]);
            }
        }
        j++;
    }
    fclose(f2);
    return 0;
}
