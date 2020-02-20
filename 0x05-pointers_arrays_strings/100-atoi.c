#include "holberton.h"
#include <stdlib.h>
/**
 * _atoi - Convert a string to an integer
 * @s: String to convert
 * Return: The int value of a number or 0
 **/
int _atoi(char *s)
{
        int sign = 1;
        unsigned int num = 0;

        while (*s++)
        {
                if (*s == '-')
                {
                        sign = sign * -1;
                }

                else if (*s >= 0 && *s <= 9)
                {
                        num = (num * 10) + (*s - '0');
                }

                else if (num > 0)
                {
                        break;
                }
        }
        return (num * sign);
}