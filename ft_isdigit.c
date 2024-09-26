/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:46 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/24 14:27:00 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ASCII (48 - 57) are numbers (0 - 9)
MAN: isdigit(), checks for a digit (0 through 9).
The values returned are nonzero if
the character c falls into the tested class, and zero if not. */
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
    printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
		return(1);
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
    printf("ft_isdigit('$') = %d\n", ft_isdigit('$'));
		return(0);
    printf("ft_isdigit(47) = %d\n", ft_isdigit(47));
    printf("ft_isdigit(58) = %d\n", ft_isdigit(58));
	    return(0);
}*/
