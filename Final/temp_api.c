#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "temp.h"
#include "temp_api.h"

/*int sum_temp[12] = {0};
int max_temp[12] = {0};
int min_temp[12] = {0};
int count_temp[12] = {0};*/
char month_name[12][20] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};


struct Temp* create_temp()
{
    struct Temp* new_temp = (struct Temp*)malloc(sizeof(struct Temp));
    if (new_temp == NULL)
    {
        fprintf(stderr, "Ошибка выделения памяти\n");
        exit(EXIT_FAILURE);
    }
    return new_temp;
}


void free_temp(struct Temp* temp)
{
    free(temp);
}


void free_all_temps(struct Temp* sensors[], int count)
{
    for (int i = 0; i < count; i++)
    {
        free_temp(sensors[i]);
    }
}


/*void print_log(struct Temp sensors[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Year: %d, Month: %02d, Day: %02d, Hour: %02d, Minute: %02d, Temperature: %d\n",
               sensors[i].year, sensors[i].month, sensors[i].day,
               sensors[i].hour, sensors[i].minute, sensors[i].temperature);
    }
}*/


void print_log(struct Temp* sensors[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Year: %d, Month: %02d, Day: %02d, Hour: %02d, Minute: %02d, Temperature: %d\n",
               sensors[i]->year, sensors[i]->month, sensors[i]->day,
               sensors[i]->hour, sensors[i]->minute, sensors[i]->temperature);
    }
}


/*int read_temp_log(struct Temp sensors[], FILE *log)
{
    int length = 0, n_line = 1;
    char line[256];
    while (fgets(line, sizeof(line), log))
    {
        if (sscanf(line, "%hu;%hhu;%hhu;%hhu;%hhu;%d",
                   &sensors[length].year,
                   &sensors[length].month,
                   &sensors[length].day,
                   &sensors[length].hour,
                   &sensors[length].minute,
                   &sensors[length].temperature) == 6)
        {
            length++;
            n_line++;
        }
        else
        {
            fprintf(stderr, "\nОшибка в строке %d\n\n", n_line);
            n_line++;
        }
    }
    return length;
} */


int read_temp_log(struct Temp** sensors, FILE *log)
{
    int length = 0, n_line = 1;
    char line[256];
    struct Temp* temp;

    while (fgets(line, sizeof(line), log))
    {
        temp = create_temp();
        if (sscanf(line, "%hu;%hhu;%hhu;%hhu;%hhu;%d",
                   &temp->year,
                   &temp->month,
                   &temp->day,
                   &temp->hour,
                   &temp->minute,
                   &temp->temperature) == 6)
        {
            sensors[length] = temp;
            length++;
            n_line++;
        }
        else
        {
            fprintf(stderr, "\nОшибка в строке %d\n\n", n_line);
            free_temp(temp);
            n_line++;
        }
    }
    return length;
}




/*void year_aver(struct Temp sensors[], int count)
{
    float avg_year = 0;
    int sum_temp_year = 0;
    for (int i = 0; i < count; i++)
    {
        sum_temp_year += sensors[i].temperature;
    }
    if (count > 0)
    {
        avg_year = (float)sum_temp_year / count;
        printf("Средняя температура за год: %.1f\n", avg_year);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}
*/

void year_aver(struct Temp* sensors[], int count)
{
    float avg_year = 0;
    int sum_temp_year = 0;
    for (int i = 0; i < count; i++)
    {
        sum_temp_year += sensors[i]->temperature;
    }
    if (count > 0)
    {
        avg_year = (float)sum_temp_year / count;
        printf("Средняя температура за год: %.1f\n", avg_year);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}

/*void year_max(struct Temp sensors[], int count)
{
    int max_temp_year = -100;
    for (int i = 0; i < count; i++)
    {
        if (max_temp_year < sensors[i].temperature)
        {
            max_temp_year = sensors[i].temperature;
        }
    }
    if (max_temp_year > -100)
    {
        printf("Максимальная температура за год: %d\n", max_temp_year);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}
*/

void year_max(struct Temp* sensors[], int count)
{
    int max_temp_year = -100;
    for (int i = 0; i < count; i++)
    {
        if (max_temp_year < sensors[i]->temperature)
        {
            max_temp_year = sensors[i]->temperature;
        }
    }
    if (max_temp_year > -100)
    {
        printf("Максимальная температура за год: %d\n", max_temp_year);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}



/*void year_min(struct Temp sensors[], int count)
{
    int min_temp_year = 100;
    for (int i = 0; i < count; i++)
    {
        if (min_temp_year > sensors[i].temperature)
        {
            min_temp_year = sensors[i].temperature;
        }
    }
    if (min_temp_year < 100)
    {
        printf("Минимальная температура за год: %d\n", min_temp_year);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}
*/

void year_min(struct Temp* sensors[], int count)
{
    int min_temp_year = 100;
    for (int i = 0; i < count; i++)
    {
        if (min_temp_year > sensors[i]->temperature)
        {
            min_temp_year = sensors[i]->temperature;
        }
    }
    if (min_temp_year < 100)
    {
        printf("Минимальная температура за год: %d\n", min_temp_year);
    }
    else
    {
        printf("Нет данных за год\n");
    }
}


/*
void month_aver(struct Temp sensors[], int count, int mon_num)
{
    float avg_temp = 0;
    int sum_temp_month = 0;
    int count_temp_month = 0;
    for (int i = 0; i < count; i++)
    {
        if (sensors[i].month == mon_num)
        {
        sum_temp_month += sensors[i].temperature;
        count_temp_month++;
        }
    }
    if (count_temp_month > 0)
    {
        avg_temp = (float)sum_temp_month / count_temp_month;
        printf("Месяц: %s.     Средняя температура: %.1f\n", month_name[mon_num - 1], avg_temp);
    }
    else
    {
        printf("Месяц: %s.     Нет данных\n", month_name[mon_num - 1]);
    }

}
*/

void month_aver(struct Temp* sensors[], int count, int mon_num)
{
    float avg_temp = 0;
    int sum_temp_month = 0;
    int count_temp_month = 0;
    for (int i = 0; i < count; i++)
    {
        if (sensors[i]->month == mon_num)
        {
            sum_temp_month += sensors[i]->temperature;
            count_temp_month++;
        }
    }
    if (count_temp_month > 0)
    {
        avg_temp = (float)sum_temp_month / count_temp_month;
        printf("Месяц: %s.     Средняя температура: %.1f\n", month_name[mon_num - 1], avg_temp);
    }
    else
    {
        printf("Месяц: %s.     Нет данных\n", month_name[mon_num - 1]);
    }
}


/*
void month_max(struct Temp sensors[], int count, int mon_num)
{
    int max_temp_month = -100;
    for (int i = 0; i < count; i++)
    {
        if (sensors[i].month == mon_num)
        {
            if (max_temp_month < sensors[i].temperature)
            {
                max_temp_month = sensors[i].temperature;
            }
        }
    }
    if (max_temp_month > -100)
    {
        printf("Месяц: %s.     Максимальная температура: %d\n", month_name[mon_num - 1], max_temp_month);
    }
    else
    {
        printf("Месяц: %s.     Нет данных\n", month_name[mon_num - 1]);
    }
}
*/

void month_max(struct Temp* sensors[], int count, int mon_num)
{
    int max_temp_month = -100;
    for (int i = 0; i < count; i++)
    {
        if (sensors[i]->month == mon_num)
        {
            if (max_temp_month < sensors[i]->temperature)
            {
                max_temp_month = sensors[i]->temperature;
            }
        }
    }
    if (max_temp_month > -100)
    {
        printf("Месяц: %s.     Максимальная температура: %d\n", month_name[mon_num - 1], max_temp_month);
    }
    else
    {
        printf("Месяц: %s.     Нет данных\n", month_name[mon_num - 1]);
    }
}

/*
void month_min(struct Temp sensors[], int count, int mon_num)
{
    int min_temp_month = 100;
    for (int i = 0; i < count; i++)
    {
        if (sensors[i].month == mon_num)
        {
            if (min_temp_month > sensors[i].temperature)
            {
                min_temp_month = sensors[i].temperature;
            }
        }
    }
    if (min_temp_month < 100)
    {
        printf("Месяц: %s.      Минимальная температура: %d\n", month_name[mon_num - 1], min_temp_month);
    }
    else
    {
        printf("Месяц: %s.     Нет данных\n", month_name[mon_num - 1]);
    }

}
*/

void month_min(struct Temp* sensors[], int count, int mon_num)
{
    int min_temp_month = 100;
    for (int i = 0; i < count; i++)
    {
        if (sensors[i]->month == mon_num)
        {
            if (min_temp_month > sensors[i]->temperature)
            {
                min_temp_month = sensors[i]->temperature;
            }
        }
    }
    if (min_temp_month < 100)
    {
        printf("Месяц: %s.      Минимальная температура: %d\n", month_name[mon_num - 1], min_temp_month);
    }
    else
    {
        printf("Месяц: %s.     Нет данных\n", month_name[mon_num - 1]);
    }
}

/*
void change_record(struct Temp sensors[], int i, int j)
{
struct Temp t;
    t=sensors[i];
    sensors[i]=sensors[j];
    sensors[j]=t;
}

*/

void change_record(struct Temp* sensors[], int i, int j)
{
    struct Temp* t = sensors[i];
    sensors[i] = sensors[j];
    sensors[j] = t;
}

/*
void SortByTemp(struct Temp sensors[], int n)
{
    for(int i=0; i<n; ++i)
        for(int j=i; j<n; ++j)
            if(sensors[i].temperature >= sensors[j].temperature)
                change_record(sensors, i, j);
}

*/

void SortByTemp(struct Temp* sensors[], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (sensors[i]->temperature >= sensors[j]->temperature)
                change_record(sensors, i, j);
}


/*
unsigned int DateToInt(struct Temp sensors[])
{
    return sensors->year << 16 | sensors->month << 8 | sensors->day;
}
*/

unsigned int DateToInt(struct Temp* sensor)
{
    return sensor->year << 16 | sensor->month << 8 | sensor->day;
}


/*

void SortByDate(struct Temp sensors[],int n)
{
    for(int i=0; i<n; ++i)
        for(int j=i; j<n; ++j)
            if(DateToInt(sensors + i)>= DateToInt(sensors + j))
                change_record(sensors, i, j);
}

*/

void SortByDate(struct Temp* sensors[], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (DateToInt(sensors[i]) >= DateToInt(sensors[j]))
                change_record(sensors, i, j);
}


/*void AddRecord(struct Temp sensors[],int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int32_t temperature)
{
    sensors[number].year = year;
    sensors[number].month = month;
    sensors[number].day = day;
    sensors[number].hour = hour;
    sensors[number].minute = minute;
    sensors[number].temperature = temperature;
}*/

void AddRecord(struct Temp* sensors[], int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int32_t temperature)
{
    sensors[number] = create_temp();
    sensors[number]->year = year;
    sensors[number]->month = month;
    sensors[number]->day = day;
    sensors[number]->hour = hour;
    sensors[number]->minute = minute;
    sensors[number]->temperature = temperature;
}

/*int AddMany(struct Temp sensors[])
{
int counter=0;
    AddRecord(sensors, counter++, 2021, 9,16, 5, 45, 9);
    AddRecord(sensors, counter++, 2022, 9, 2, 16, 23, -9);
    AddRecord(sensors, counter++, 2021, 1, 7, 22, 5, 8);
    AddRecord(sensors, counter++, 2021, 9, 5, 7, 45, 1);
    return counter;
} */


int AddMany(struct Temp* sensors[])
{
    int counter = 0;
    AddRecord(sensors, counter++, 2021, 9, 16, 5, 45, 9);
    AddRecord(sensors, counter++, 2022, 9, 2, 16, 23, -9);
    AddRecord(sensors, counter++, 2021, 1, 7, 22, 5, 8);
    AddRecord(sensors, counter++, 2021, 9, 5, 7, 45, 1);
    return counter;
}

