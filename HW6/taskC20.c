#include <stdio.h>
//Тут с описанием, потому что иначе трудно разобраться

char brackets(char *str)
{
    int t_1, t_2, t_3, t_res;
    t_res = 0; //Результат функции
    t_1 = 0;//кол-во знаков (
    t_2 = 0;//кол-во знков )
    t_3 = 0;//правильность расставления скобок, т.к. не только кол-во но и очередность важны
    for (int i = 0; str[i] != '.'; i++)
    {
        if (str[i] == '(')
        {
            t_1++;
        }
        else if (str[i] == ')')
        {
            t_2++;
        }
    }
    for (int i = 0; str[i] != '.'; i++)
    {
        if (str[i] == '(')
        {
            t_3++;
        }
        else if (str[i] == ')')
        {
            t_3--;
        }
        if (t_3 < 0)
        {
            return (0); //тут если очередность нарушена, то возвращаем 0
        }
    }
    if (t_1 == t_2 && t_3 == 0)
        t_res = 1;
    else
        t_res = 0;
    return (t_res);
}

int main()
{
    char str[1000];
    scanf("%999s", str);
    int t = brackets(str);
    printf("%s\n", (t == 1) ? "YES" : "NO");
    return 0;
}
