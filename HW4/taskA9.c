/*
 * HW1.c
 *
 * Copyright 2024 Вячеслав <Вячеслав@DESKTOP-IFUG0QF>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }
    if (max < e)
    {
        max = e;
    }
    /*max = (a > b) ? ((a > c) ? ((a > d) ? ((a > e) ? a : e) : d) : ((c > d) ? ((c > e) ? c : e) : d)) : ((b > c) ? ((b > d) ? ((b > e) ? b : e) : d) : ((c > d) ? ((c > e) ? c : e) : d));*/
    /*    int array[5], max;
        scanf("%d%d%d%d%d", &array[0], &array[1], &array[2], &array[3], &array[4]);
        max = 0;
        for (int i=0; i<5; i++)
        {
            if (array[i]>max)
            {
                max = array[i];
            }
        }*/
    printf("%d", max);
    return 0;
}

