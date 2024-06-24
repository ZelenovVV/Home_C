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

    int X;
    scanf("%d", &X);

    if ((X > 0 && X < 3) || X == 12)
    {
        printf("winter");
    }
    else if (X >= 3 && X < 6)
    {
        printf("spring");
    }
    else if (X >= 6 && X < 9)
    {
        printf("summer");
    }
    else if (X >= 9 && X < 12)
    {
        printf("autumn");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}

