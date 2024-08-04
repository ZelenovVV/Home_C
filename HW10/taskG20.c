#include <stdio.h>
#include <string.h>


void bubble_sort(int size, char* array)
{
char n;
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (array[i] > array[j])
            {
                n = array[i];
                array[i] = array[j];
                array[j] = n;
            }
}


void kill_space(char string1[], char string2[], int n)
{
    int i = 0, j = 0;
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



int is_palindrome(int size, char* line)
{
    char letters[size];
    int counts[size];
    int letters_count = 0;
    int f = 0, f_nech = 0, f_1 = 0;


    bubble_sort(strlen(line), line);

    for (int i = 0; i < size; i++)
    {
        if (letters_count > 0 && line[i] == letters[letters_count - 1])
        {
            counts[letters_count - 1]++;
        }
        else
        {
            letters[letters_count] = line[i];
            counts[letters_count] = 1;
            letters_count++;
        }
    }

    for (int j = 0; j < letters_count; j++)
    {
        if (counts[j] == 1)
        {
            f_1++;
        }
        if (counts[j] >= 2)
        {
            f++;
            if(counts[j]%2 != 0)
            {
                f_nech++;
            }
        }
    }
    //printf("%llu\n", strlen(line));

    //printf("%d %d %d\n", f, f_nech, f_1);

    if (strlen(line)%2 == 0 && f > 0)
    {
        if (f_1 > 0)
        {
            f = 0;
        }
        else if (f_nech > 0)
        {
            f = 0;
        }
        else
        {
            f = 1;
        }
    }

    if (strlen(line)%2 != 0 && f > 0)
    {
        if (f_1 != 1 && f_nech > 1)
        {
            f = 0;
        }
        else
        {
            f = 1;
        }
    }

    return f;
}



int main(void)
{
    FILE *f1;
    char string_1[1000] = {0};
    char string_2[1000] = {0};
    int flag = -1;

    f1 = fopen("input.txt", "r");
    fscanf(f1, "%[^\n]", string_1);
    fclose(f1);

    kill_space(string_1, string_2, strlen(string_1));

    //printf("%s\n", string_2);

    flag = is_palindrome(strlen(string_2), string_2);

    if (flag >= 1)
    {
        printf("YES");
    }
    if (flag == 0)
    {
        printf("NO");
    }

    return 0;
}


