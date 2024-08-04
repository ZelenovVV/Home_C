#include <stdio.h>


int str_len(char string[], int n)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            len++;
        }
    }
    return len;
}


int main(void)
{
    FILE *f1, *f2;
    char string_1[100], string_2[100];
    int count_1 = 0, count_2 = 0, len_1 = 0, len_2 = 0;

    f1 = fopen("input.txt", "r");
    fscanf(f1, "%s %s", string_1, string_2);
    fclose(f1);

    len_1 = str_len(string_1, 100);
    len_2 = str_len(string_2, 100);

    f2 = fopen("output.txt", "w");
    for (int i = 0; i < len_1; i++)
    {
        count_1 = 0;
        for (int j = 0; j < len_1; j++)
        {
            if (string_1[i] == string_1[j])
            {
                count_1++;
            }
        }
        if (count_1 == 1)
        {
            count_2 = 0;
            for (int k = 0; k < len_2; k++)
            {
                if (string_1[i] == string_2[k])
                {
                    count_2++;
                }
            }
            if (count_2 == 1)
            {
                fprintf(f2, "%c ", string_1[i]);
            }
        }
    }
    fclose(f2);
    return 0;
}
