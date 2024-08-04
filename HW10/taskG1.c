#include <stdio.h>



int main(void)
{
    FILE *f1, *f2;
    char string[100];
    signed char c;
    int count = 0, i = 0;
    f1 = fopen("input.txt","r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && i < 100)
        {
            if (c != '\n' && c != '\r')
            {
                string[i] = (char)c;
                i++;
                count++;
            }

        }
    }
    fclose(f1);
    string[i] = '\0';
    f2 = fopen("output.txt","w");
    for (int j = 0; j < 3; j++)
    {
        fprintf(f2, "%s", string);
        if (j < 2)
        {
            fprintf(f2, ", ");
        }
    }
    fprintf(f2, " %d", count);
    fclose(f2);
    return 0;
}

