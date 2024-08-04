#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string[10000];
    signed char c;
    int num_a = 0, num_A = 0, i = 0;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && i < 10000)
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
    for (int j = 0; string[j] != '\0'; j++)
    {
        if (string[j] >= 'a' && string[j] <= 'z')
            num_a++;
        if (string[j] >= 'A' && string[j] <= 'Z')
            num_A++;
    }
    f2 = fopen("output.txt", "w");
    //fprintf(f2, "%s", string);
    fprintf(f2, "%d %d", num_a, num_A);
    fclose(f2);
    return 0;
}
