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

void make_palindrome(int size, char* line)
{
    char letters[size];
    int counts[size];
    int letters_count = 0;


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


int pal_len = 0;
int line_len, m_p = -1;
    for (int i = 0; i < letters_count; i++)
    {
        while (counts[i] >= 2)
        {
            line[pal_len++] = letters[i];
            counts[i] -= 2;
        }
        if (counts[i] == 1 && m_p == -1)
        {
            m_p = i;
        }
    }
    line_len = pal_len;
    if (m_p != -1)
    {
        line[pal_len++] = letters[m_p];
    }
    for (int i = line_len - 1; i >= 0; i--)
    {
        line[pal_len++] = line[i];
    }
    line[pal_len] = '\0';
}

int main(void)
{
    FILE *f1, *f2;
    char string_In[1000];

    f1 = fopen("input.txt", "r");
    fscanf(f1, "%[^\n]", string_In);
    fclose(f1);


    make_palindrome(strlen(string_In), string_In);


    f2 = fopen("output.txt", "w");
    fprintf(f2, "%s", string_In);
    fclose(f2);

    return 0;
}
