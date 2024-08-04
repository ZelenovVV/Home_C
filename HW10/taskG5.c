#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    int count = 0, i = 0;
    signed char c;
    f1 = fopen("input.txt","r");
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
        count = i;
    }
    fclose(f1);
    string[i] = '\0';

    f2 = fopen("output.txt","w");
    for (int j = 0; j < count; j++)
    {
        if (string[j] == 'a')
        {
            fprintf(f2, "%c", 'b');
        }
        else if (string[j] == 'b')
        {
            fprintf(f2, "%c", 'a');
        }
        else if (string[j] == 'A')
        {
            fprintf(f2, "%c", 'B');
        }
        else if (string[j] == 'B')
        {
            fprintf(f2, "%c", 'A');
        }
        else
        {
            fprintf(f2, "%c", string[j]);
        }
    }
    fclose(f2);
    return 0;
}
