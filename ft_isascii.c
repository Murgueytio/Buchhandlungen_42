/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:58:03 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:58:03 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ASCII (0 - 127)
MAN: isascii(), checks whether c is a 7-bit unsigned char value
that fits into the ASCII character set.
The values returned are nonzero if
the character c falls into the tested class, and zero if not. */
#include "libft.h"
#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main(void)
{
	printf("%d\n", ft_isascii('~'));
	printf("%d\n", ft_isascii('8'));
}*/