#include <stdio.h>


void neib_swap(char string[], int n)
{
    int i = 0, j =0;
    char neib_sw ='0';
    while (i < n)
    {
        if (string[i] != ' ')
        {
            j = i + 1;
            while (j < n && string[j] == ' ')
            {
                j++;
            }
            if (j < n)
            {
                neib_sw = string[i];
                string[i] = string[j];
                string[j] = neib_sw;
                i = j + 1;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
}


int main(void)
{
    FILE *f1, *f2;
    char string[1000] = {0};
    signed char c;
    int i = 0, count = 0, n = 0;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && i < 1000)
        {
            if (c != '\n' && c != '\r')
            {
                string[i] = (char)c;
                if (string[i] != ' ')
                {
                    count++;
                }
                i++;
            }
        }
    }
    n = i;
    fclose(f1);
    string[i] = '\0';

    if (count%2 == 0)
    {
        neib_swap(string, n);
    }
    else
    {
        neib_swap(string, (n - 1));
    }

    f2 = fopen("output.txt", "w");
    for (int j = 0; j < n; j++)
    {
        fprintf(f2, "%c", string[j]);
    }
    fclose(f2);

    return 0;
}
