#include <stdio.h>


int main(void)
{
    FILE *f1, *f2;
    char string_1[100], string_2[100], string_3[100];
    f1 = fopen("input.txt", "r");
    fscanf(f1, "%s %s %s", string_1, string_2, string_3);
    fclose(f1);
    f2 = fopen("output.txt", "w");
    fprintf(f2, "Hello, %s %s!", string_2, string_1);
    fclose(f2);
    return 0;
}
