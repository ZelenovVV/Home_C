#include <stdio.h>
#include <string.h>

void soundex(char line_1[], char line_2[5])
{
    int p = 1, j = 1;
    char line[1000];
    line[0] = line_1[0];
    for (int i = 1; line_1[i] != '\0'; i++)
    {
        if (line_1[i] == 'b' ||  line_1[i] == 'f' || line_1[i] == 'p' || line_1[i] == 'v')
        {
            line[p] = '1';
            p++;
        }
        else if (line_1[i] == 'c' ||  line_1[i] == 'g' || line_1[i] == 'j' || line_1[i] == 'k' || line_1[i] == 'q' || line_1[i] == 's' || line_1[i] == 'x' || line_1[i] == 'z')
        {
            line[p] = '2';
            p++;
        }
        else if (line_1[i] == 'd' ||  line_1[i] == 't')
        {
            line[p] = '3';
            p++;
        }
        else if (line_1[i] == 'l')
        {
            line[p] = '4';
            p++;
        }
        else if (line_1[i] == 'm' ||  line_1[i] == 'n')
        {
            line[p] = '5';
            p++;
        }
        else if (line_1[i] == 'r')
        {
            line[p] = '6';
            p++;
        }
    }
    line[p] = '\0';

    //printf("string: \n%s\n", line);

    line_2[0] = line[0];
    for (int i = 1; i < strlen(line) && j < 4; i++)
    {
        if (line[i] != line[i - 1])
        {
            line_2[j] = line[i];
            j++;
        }
    }
    while (j < 4)
    {
        line_2[j] = '0';
        j++;
    }
    line_2[4] = '\0';

}

int main(void)
{
    FILE *f1, *f2;
    char line_in[1000], line_out[5];
    int p = 0;
    signed char c;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && p < 1000)
        {
            if (c != '\n' && c != '\r')
            {
                line_in[p] = (char)c;
                p++;
            }
        }
    }
    fclose(f1);
    line_in[p] = '\0';

    //printf("string: \n%s\n", line_in);

    soundex(line_in, line_out);

    //printf("string: \n%s\n", line_out);

    f2 = fopen("output.txt", "w");
    fprintf(f2, "%s", line_out);
    fclose(f2);

    return 0;
}


