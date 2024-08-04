#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    signed char c;
    int i = 0, j = 0, num = 0;
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
        if (string[j] == 'a' && (string[j+1] == ' ' || string[j+1] == '\0'))
        {
            num++;
        }
        j++;
    }

    f2 = fopen("output.txt", "w");
    fprintf(f2, "%d", num);
    fclose(f2);

    return 0;
}


