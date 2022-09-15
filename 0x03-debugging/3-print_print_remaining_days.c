#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints how many days are left in a year 
 * from a particular given date, leap years included
 * @month: month, number format
 * @day: day of the month
 * @years: year
 * Return: void
 */

void print_remaining_days(int day, int month, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
