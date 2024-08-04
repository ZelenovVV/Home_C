#include <stdio.h>

void Sort(int arr[], int n)
{
    int noSort;
    for (int i = 0; i < n; i++)
    {
        noSort = 1;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j-1] > arr[j])
            {
                int x = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = x;
                noSort = 0;
            }
        }
        if (noSort == 1)
            break;
    }
}


int main(void)
{
    FILE *f1, *f2;
    char string[1000];
    int nums[1000], buffer[1000];
    int nums_count = 0, buf_count = 0;
    signed char c;
    int i = 0;
    f1 = fopen("input.txt", "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1))!= EOF && i < 1000)
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
        if (string[j] >= '0' && string[j] <= '9')
        {
            buffer[buf_count] = string[j];
            buf_count++;
        }
        else
        {
            if (buf_count > 0)
            {
                buffer[buf_count] = '\0';
                int number = 0;
                for (int k = 0; k < buf_count; k++)
                {
                    number = number * 10 + (buffer[k] - '0');
                }
                nums[nums_count] = number;
                nums_count++;
                buf_count = 0;
            }
        }
    }
    if (buf_count > 0)
    {
        buffer[buf_count] = '\0';
        int number = 0;
        for (int j = 0; j < buf_count; j++)
        {
            number = number * 10 + (buffer[j] - '0');
        }
        nums[nums_count] = number;
        nums_count++;
    }

    Sort(nums, nums_count);

    f2 = fopen("output.txt", "w");
    for (int i = 0; i < nums_count; i++)
    {
        fprintf(f2, "%d ", nums[i]);
    }
    fclose(f2);


    return 0;
}


