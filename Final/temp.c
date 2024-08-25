#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include "temp.h"
#include "temp_api.h"




int main(int argc, char *argv[])
{
    FILE *log;
    int max_size = 1000;
    struct Temp* sensors[max_size];
    int count = 0;
    setlocale(LC_ALL, ".utf-8");
    int rez = 0;
    char *filename = NULL;
    int number = -1, l = 0, d = 0, t = 0, h = 0;

    while ((rez = getopt(argc, argv, "hf:m:ltd")) != -1)
    {
        switch (rez)
        {
            case 'h':
                h = 1;
                printf("Консольное приложение предназначено для вывода статистики с датчика температуры\n");
                printf("Кроме того доступны следующие аргументы:\n");
                printf("-h Описание функционала приложения\n");
                printf("-f  <filename.csv> - подгрузить другой входной файл csv для обработки взамен стандартного\n");
                printf("-m <номер месяца>  - задать номер месяца для вывода статитстики по месяцу. Задавать месяцы с 1 по 12. Число 0 задает вывод статистики по всем месяцам\n");
                printf("-l после расчета годовой статистики вывести в конце общий журнал по показаниям датчика\n");
                printf("-d отсортировать и вывести показаниям датчика по дате\n");
                printf("-t отсортировать и вывести показаниям датчика по температуре\n");
                break;
            case 'f':
                filename = optarg;
                break;
            case 'm':
                number = atoi(optarg);
                break;
            case 'l':
                l = 1;
                break;
            case 'd':
                d = 1;
                break;
            case 't':
                t = 1;
                break;
            case '?':
                printf("Ошибка: неизвестный аргумент!\n");
                break;
        }
    }

    if ((h == 0) & (number <= 12))
    {

        if (filename != NULL)
        {
            log = fopen(filename, "r");
            count = read_temp_log(sensors, log);
            fclose(log);
        }
        else
        {
            log = fopen("temperature.csv", "r");
            count = read_temp_log(sensors, log);
            fclose(log);
        }

        if ((number > 0) & (number < 13))
        {
            month_aver(sensors, count, number);
            month_max(sensors, count, number);
            month_min(sensors, count, number);
        }

        if (number == 0)
        {
            for (int k = 1; k < 13; k++)
            {
                month_aver(sensors, count, k);
                month_max(sensors, count, k);
                month_min(sensors, count, k);
            }
        }

        if ((number == -1) & (t == 0) & (d == 0))
        {
            year_aver(sensors, count);
            year_max(sensors, count);
            year_min(sensors, count);
        }

        if (t == 1)
        {
            SortByTemp(sensors, count);
            print_log(sensors, count);
        }

        if (d == 1)
        {
            SortByDate(sensors, count);
            print_log(sensors, count);
        }

        if (l == 1)
        {
            printf("\n");
            print_log(sensors, count);
        }

        free_all_temps(sensors, count);
    }

    if (number > 12)
    {
        printf("К сожалению вы не знаете сколько месяцев в году\n");
    }

    return 0;
}
