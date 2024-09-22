#include <stdio.h>

int day_number(int day, int month, int year)
{
	int list_size_months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, number_day = 0;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) list_size_months[1] = 29;
	if (day > list_size_months[month - 1] || day < 1 || month < 1 || month > 12) return -1;
	for (int i = 0; i < month - 1; i++)
	{
		number_day += list_size_months[i];
	}
	number_day += day;
	return number_day;
}

int main()
{
	int day, month, year, result_day;
	scanf("%d %d %d", &day, &month, &year);
	result_day = day_number(day, month, year);
	printf("result: %d", result_day);
	return 0;
}