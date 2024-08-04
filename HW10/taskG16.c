#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    signed char c;
    int i = 0, j = 0;
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
            if (string[j] == 'L' && string[j+1] == 'i' && string[j+2] == 'n' && string[j+3] == 'g')
            {
                fprintf(f2, "Cao");
                j = j+4;
            }
            else
            {
                fprintf(f2, "%c", string[j]);
                j++;
            }
    }
    fclose(f2);

    return 0;
}
