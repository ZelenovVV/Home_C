#include <stdio.h>


int StrLen(int lenght,char str[])
{
char in;
int count = 0;
    while (count < lenght)
    {
        scanf("%c", &in);
            if (in == '.')
                return count;
        str[count] = in;
        count++;
    }
    return count;
}


int NumberLen(char in_str[], char symbols[], int numbers[], int lenght)
{
    int numSymb = 1;
    int num_len = 0;
    int i = 0;
    for(i = 0; i < lenght-1; i++)
    {
        if(in_str[i] == in_str[i + 1])
        {
            numSymb++;
        }
        else
        {
            symbols[num_len] = in_str[i];
            numbers[num_len] = numSymb;
            num_len++;
            numSymb = 1;
        }
    }
    symbols[num_len] = in_str[i];
    numbers[num_len] = numSymb;
    num_len++;
    return num_len;
}

void PrintSymbNum(char symbols[],int numbers[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        printf("%c%d", symbols[i], numbers[i]);
    }
}



int main(void)
{
    enum {N = 1000};
    char str[N], symb[N];
    int number[N];
    int len = StrLen(N, str);
    int number_len = NumberLen(str, symb, number, len);
    PrintSymbNum(symb, number, number_len);
    return 0;
}

