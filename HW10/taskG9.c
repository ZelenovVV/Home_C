#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    signed char c;
    int i = 0;
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
    for (int j = 0; string[j] != '\0'; j++)
    {
        if (string[j] != ' ')
        {
            for (int k = j+1; string[k] != '\0'; k++)
            {
                if (string[j] == string[k])
                    string[k] = ' ';
            }
        }
    }
    f2 = fopen("output.txt", "w");
    //fprintf(f2, "%s", string);
    for (int j = 0; string[j] != '\0'; j++)
    {
        if (string[j] != ' ')
        {
            fprintf(f2, "%c", string[j]);
        }
    }
    fclose(f2);
    return 0;
}
