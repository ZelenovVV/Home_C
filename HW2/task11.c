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
    int a, a100, a10, a1, s;
    scanf("%d", &a);
	a100 = a/100;
	a10 = (a%100)/10;
	a1 = (a%100)%10;	
	s = a100*a10*a1;
    printf("%d", s);
    return 0;
}

