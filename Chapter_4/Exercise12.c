/*
Write a program that has as inputs three integers. The first is the day,
the second is the month and the third the year. By typing a date like this,
the program should display the next date.
For example:
if input is 28:2:2023, the output is 29:2:2023.
*/

#include <stdio.h>

int isLeapYear(int year) // Check if its a leap year
{
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int isValidDate(int day, int month, int year) // Check if the date is valid
{
    if (month < 1 || month > 12)
        return 0;
    if (day < 1)
        return 0;
    if (month == 2)
    {
        if (isLeapYear(year))
        {
            if (day <= 29)
                return 1;
            else
                return 0;
        }
        else
        {
            if (day <= 28)
                return 1;
            else
                return 0;
        }
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 30)
            return 1;
        else
            return 0;
    }
    if (day <= 31)
        return 1;
    else
        return 0;
}

void getNextDate(int *day, int *month, int *year) // Find next date by checking day, month and year conditions.
{
    if (isValidDate(*day, *month, *year))
    {
        if (*month == 2)
        {
            if (isLeapYear(*year))
            {
                if (*day == 29)
                {
                    *day = 1;
                    *month = 3;
                }
                else
                {
                    *day = *day + 1;
                }
            }
            else
            {
                if (*day == 28)
                {
                    *day = 1;
                    *month = 3;
                }
                else
                {
                    *day = *day + 1;
                }
            }
        }
        else if (*month == 4 || *month == 6 || *month == 9 || *month == 11)
        {
            if (*day == 30)
            {
                *day = 1;
                *month = *month + 1;
            }
            else
            {
                *day = *day + 1;
            }
        }
        else
        {
            if (*day == 31)
            {
                if (*month == 12)
                {
                    *day = 1;
                    *month = 1;
                    *year = *year + 1;
                }
                else
                {
                    *day = 1;
                    *month = *month + 1;
                }
            }
            else
            {
                *day = *day + 1;
            }
        }
    }
}

int main()
{
    int day, month, year;

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    getNextDate(&day, &month, &year);

    printf("Next date: %d:%d:%d \n", day, month, year);

    return 0;
}