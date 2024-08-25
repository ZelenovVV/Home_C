#ifndef TEMP_H
#define TEMP_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Temp
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int32_t temperature;
};



#endif

