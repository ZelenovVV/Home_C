#include <stdio.h>

int main(void)
{
    FILE *f1, *f2;
    char string[1001];
    char c;
    int i = 0, count_1 = 0, count_2 = 0, pos[1000];


    f1 = fopen("input.txt", "r");
    while ((c = fgetc(f1))!= EOF)
    {
        if (c != '\n' && c != '\r')
        {
            string[i] = (char)c;
            i++;
        }
    }
    count_1 = i;
    fclose(f1);
    c = string[i-1];
    for (i = 0; i < count_1; i++)
    {
        if (string[i] == c && i != count_1 - 1)
        {
            pos[count_2] = i;
            count_2++;
        }
    }

    f2 = fopen("output.txt", "w");
    for (int j = 0; j < count_2; j++)
    {
        fprintf(f2, "%d ", pos[j]);
    }
    fclose(f2);
    return 0;
}
