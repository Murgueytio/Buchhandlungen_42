/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:57:18 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:57:18 by oscamurg         ###   ########.fr       */
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

int	ft_atoi(const char *nptr)
{
	int	res;
	int	s;

	res = 0;
	s = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		s *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while ('0' <= *nptr && *nptr <= '9')
	{
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	return (res * s);
}

// int main(void)
// {
//     const char *nptr = "   -484";
//     int result = ft_atoi(nptr);
//     printf("%d\n", result);
//     return (0);
// }
