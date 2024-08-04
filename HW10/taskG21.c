#include <stdio.h>
#include <string.h>


int star_count(char* array)
{
    unsigned int size = strlen(array);
    int star = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == '*')
        {
            star++;
        }
    }
    return star;
}

void fill_stars(char *str, int count, int n)
{
    int row = n;
    int index = 0;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            str[index] = ' ';
            index++;
        }
        for (int j = 0; j < i; j++)
        {
            str[index] = '*';
            index++;
            if (j < i - 1)
            {
                str[index] = ' ';
                index++;
            }
        }
        str[index] = '\n';
        index++;
    }
    str[index] = '\0';
}


int main(void)
{
    FILE *f1, *f2;
    char line[10000] = {0};
    char line_out[10000] = {0};
    int star = 0, flag = 0, n_mer = 0, p = 0;
    signed char c;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && p < 10000)
        {
            if (c != '\n' && c != '\r')
            {
                line[p] = (char)c;
                p++;
            }
        }
    }
    fclose(f1);
    line[p] = '\0';

    //printf("string: \n%s\n", line);

    star = star_count(line);

    for (float i = 1; i < 10000; i++)
    {
        if (star == (i*(i+1)/2))
        {
            n_mer = (int)i;
            flag = 1;
            break;
        }
    }

    //printf("star: %d; n-mer: %d; flag: %d\n", star, n_mer, flag);

    fill_stars(line_out, star, n_mer);
    //printf("string: \n%s\n", line_out);


    f2 = fopen("output.txt", "w");
    if (flag == 0)
    {
        fprintf(f2, "NO");
    }
    else
    {
        fputs(line_out, f2);
    }
    fclose(f2);

    return 0;
}


