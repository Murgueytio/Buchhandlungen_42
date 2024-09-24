/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:30:53 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 19:41:20 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MAN: The atoi() function converts the initial portion of the string pointed
to by nptr to int; it does not detect errors.
The atoi() function converts a string to its int representation.
The string passed as parameter may begin with an arbitrary number of whitespaces
as determined by isspace(3).
After the arbitrary number of whitespaces, there can be one single optional '+'
or '-' sign.
The remainder of the string will be converted to an int, stopping at the first
character which is not a valid digit in the given base (in our case we only need
to manage base 10, so the valid digits are 0-9)
RETURN VALUE: The converted value or 0 on error.
*/
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int    ft_isspace(int c);

int    ft_atoi(const char *nptr)
{
    int    result;
    int    sign;
    int    i;
    
    result = 0;
    sign = 1;
    i = 0;
    while (ft_isspace(nptr[i]))
        i++;
    if (nptr[i] == '+' && nptr[i + 1] != '-')
        i++;
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
    {
        result *= 10;
	result += nptr[i] - 48;
	i++;
    }
    result *= sign;
    return (result);
}

/* int    ft_isspace(int c)
{
    if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
        return (1);
    return (0);
} */

/*
int main(void)
{
    int result;
    
    result = 0;              // result = 0
    result *= 10;            // result = 0
    result += '1' - 48;      // result = 1
    result *= 10;            // result = 10
    result += '5' - 48;      // result = 15
    result *= 10;            // result = 150
    result += '4' - 48;      // result = 154
}
*/