#include <stdio.h>


void kill_space(char string1[], char string2[], int n)
{
    int i = 0, j = 0;
    int space = 0;
    while (i < n && string1[i] == ' ')
    {
        i++;
    }
    while (i < n)
    {
        if (string1[i] != ' ')
        {
            string2[j] = string1[i];
            j++;
            space = 0;
        }
        else if (space == 0)
        {
            string2[j] = ' ';
            j++;
            space = 1;
        }
        i++;
    }
    if (j > 0 && string2[j - 1] == ' ')
    {
        j--;
    }
    string2[j] = '\0';
    //printf("%s", string2);
    return;
}



int main(void)
{
    FILE *f1, *f2;
    char string_1[1000] = {0};
    char string_2[1000] = {0};
    signed char c;
    int i = 0, n = 0;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && i < 1000)
        {
            if (c != '\n' && c != '\r')
            {
                string_1[i] = (char)c;
                i++;
            }
        }
    }
    n = i;
    fclose(f1);
    string_1[i] = '\0';

    kill_space(string_1, string_2, n);

    f2 = fopen("output.txt", "w");
    for (int j = 0; string_2[j] != '\0'; j++)
    {
        fprintf(f2, "%c", string_2[j]);
    }
    fclose(f2);

    return 0;
}
